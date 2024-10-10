
#include<main.h>

void SystemClock_Config(void);
static void MX_GPIO_Init(void);

// Vì đề bài yêu cầu các kí tự có dấu nên em sẽ tạo ra một mảng chứa các kí tự cần thiết cho các kí tự có dấu trong họ tên.
// Mỗi kí tự tùy chỉnh được thể hiện 8 byte,, mỗi hàng là một kí tự. 
// Trong bài này, có 6 kí tự tùy chỉnh được định nghĩa như dưới đây
const char cgram_dat[128]={ 0x0D, 0x12, 0x00, 0x1F, 0x11, 0x11, 0x11, 0x1F,	    // õ
		 					0x04, 0x0A, 0x00, 0x1F, 0x10, 0x1F, 0x10, 0x1F,	    // ê
		 					0x08, 0x04, 0x00, 0x0E, 0x11, 0x1F, 0x11, 0x11,	    // à
                            0x0D, 0x16, 0x0A, 0x1F, 0x10, 0x1F, 0x10, 0x1F,	    // ễ
		 		            0x04, 0x0A, 0x00, 0x0E, 0x11, 0x1F, 0x11, 0x11,	    // â
		 					0x0A, 0x04, 0x00, 0x0E, 0x11, 0x1F, 0x11, 0x11,     // ă
                            };
// khai báo biến i là một số nguyên không dấu 16bit
uint16_t i;

//hàm gửi một nửa byte(4 bit) là dữ liệu hoặc lệnh đến LCD, nó chứa 2 tham số là rs(chỉ định lệnh(0) hay dữ liệu(1) và data(4 bit dữ liệu))
void lcd_write_nibble(uint8_t rs, uint8_t data){
    HAL_GPIO_WritePin(RS_GPIO_Port, RS_Pin, rs); //thiết lập trạng thái của chân rs. Nếu rs = 0(LCD nhận lệnh), rs = 1(LCD nhận dữ liệu)
    HAL_GPIO_WritePin(RW_GPIO_Port, RW_Pin, 0);  //thiết lập chân RW ở mức thấp (0), nó có nghĩa là dữ liệu sẽ được ghi vào LCD(chế độ ghi)
    HAL_GPIO_WritePin (E_GPIO_Port, E_Pin, 1);   //thiết lập chân E ở mức cao (1), LCD sẽ đọc dữ liệu từ các chân dữ liệu 
    //dịch chuyển từng bit của data để lấy giá trị 1 hoặc 0 của các bit tương ứng và nó được ghi vào các chân dữ liệu D4, D5, D6, D7 trên LCD
    HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, (data>>0) & 0x01);//lấy bit thứ nhất
    HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, (data>>1) & 0x01);//lấy bit thứ hai
    HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, (data>>2) & 0x01);//lấy bit thứ ba
    HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, (data>>3) & 0x01);//lấy bit thứ tư
    //lệnh NOP để tạo độ trễ ngắn, đảm bảo dữ liệu đã được ổn định trước khi vào chân E
    for (uint8_t i=0; i<72; i++)    asm("NOP");
    HAL_GPIO_WritePin (E_GPIO_Port, E_Pin, 0);//đặt chân E về mức thấp (0), kết thúc quá trình đọc dữ liệu
    //tạo độ trễ để đảm bảo dữ liệu đã được ghi hoàn toàn
    for (uint8_t i=0; i<72; i++)    asm("NOP");
}

//hàm này dùng để gửi lệnh điều khiển 8bit tới LCD như thiết lập, đặt con trỏ...bằng cách chia thành hai phần mỗi phần 4-bit
void lcd_send_cmd (uint8_t cmd){
    lcd_write_nibble(0, (cmd >> 4) & 0x0F); //gửi 4 bit cao, đặt rs = 0 để hiểu dữ liệu gửi là một lệnh
    lcd_write_nibble(0, (cmd >> 0) & 0x0F); //gửi 4 bit thấp
    HAL_Delay(2);   //đợi một khoảng thời gian để lệnh hoàn tất
}

//hàm này gửi dữ liệu 8bit đến lcd như các kí tự muốn hiển thị trên LCD, cũng chia thành 2 phần mỗi phần 8bit
void lcd_send_data(uint8_t data){
	lcd_write_nibble(1, (data >> 4) & 0x0F); //gửi 4 bit cao, đặt rs = 1 để hiểu dữ liệu gửi đến là dữ liệu hiển thị 
	lcd_write_nibble(1, (data >> 0) & 0x0F); //gửi 4 bit thấp
	HAL_Delay(2);   //đợi một khoảng thời gian để dữ liệu hoàn tất
}

//hàm này cấu hình LCD trong chế độ hoạt động 4-bit và thực hiện các bước khởi tạo để LCD hoạt động
void lcd_config(void){
	HAL_Delay(20);  //đợi 20ms để LCD ổn định xíu sau khi bật lên
	lcd_write_nibble(0, 0x03); HAL_Delay(5);    //thiết lập chế độ 8-bit, gửi 4 lần để đảm bảo LCD nhận lệnh (lần 1)
	lcd_write_nibble(0, 0x03); HAL_Delay(5);    //                                                           (lần 2)
	lcd_write_nibble(0, 0x03); HAL_Delay(1);    //                                                           (lần 3)
	lcd_write_nibble(0, 0x03); HAL_Delay(1);    //                                                           (lần 4)
	lcd_write_nibble(0, 0x02); HAL_Delay(1);    //chuyển LCD sang chế độ 4bit
	lcd_send_cmd(0x28);     //gửi lệnh 0x28 để thiết lập LCD chế độ 4-bit, sử dụng 2 dòng hiển thị và các ký tự với kích thước 5x8
	HAL_Delay(10);          //tạo độ trễ 10ms để LCD có đủ thời gian xử lý lệnh
	lcd_send_cmd(0x28);
	HAL_Delay(10);
	lcd_send_cmd(0x0C);     //bật hiển thị, tắt con trỏ để không nhấp nháu con trỏ
	lcd_send_cmd(0x01);     //xóa toàn bộ màn hình
	lcd_send_cmd(0x06);     //đặt chế độ tự động dịch con trỏ khi ghi ký tự mới
}

//hàm này dùng để hiển thị một chuỗi kí tự lên màn hình LCD
//data: là con trỏ tới mảng chứa các ký tự cần hiển thị, len: Là độ dài của chuỗi ký tự.
void display_text(uint8_t *data, uint8_t len){
	uint8_t j;      //khai báo biến j để lặp qua từng kí tự của chuỗi
	for(j = 0; j < len; j++){ //chạy từ vị trí 0 đến len - 1
	    lcd_send_data(data[j]); //gọi hàm lcd_send_data để gửi từng ký tự của data tới LCD để hiển thị, data[j] là ký tự tại vị trí thứ j trong chuỗi
	}
}

//hàm này dùng để đặt con trỏ của LCD đến vị trí cụ thể(hàng row và cột col)
void lcd_gotoxy(uint8_t row, uint8_t col){
	uint8_t coordinates = 0;        //khai báo biến coordinates để lưu địa chỉ DDRAMtương ứng với vị trí hàng và cột
	switch(row){        //bắt đầu switch để xác định hàng nào đang được chọn(hàng 0 hoặc hàng 1)
	case 0:
		coordinates = 0x80 | col; //nếu là 0(hàng đầu), coordinates được tính bằng cách kết hợp giá trị 0x80 với cột (col)
		break;
	case 1:
		coordinates = 0xC0 | col; //nếu là 1(hàng hai), coordinates được tính bằng cách kết hợp giá trị 0xC0 với cột (col)
		break;
	default: coordinates = col | 0x80;  //nếu giá trị của row không phải là 0 hoặc 1, thì mặc định địa chỉ DDRAM được thiết lập cho hàng 0
	}
	lcd_send_cmd(coordinates);  //coordinates sau đó được gửi tới LCD bằng cách gọi lcd_send_cmd, để đặt con trỏ tới vị trí mong muốn
}

//hàm được dùng để ghi dữ liệu vào bộ nhớ CGRAM của LCD, nơi lưu trữ các ký tự đặc biệt ở trên
void lcd_write_cgram(void){
    lcd_send_cmd(0x40); //gọi hàm để con trỏ của LCD đến địa chỉ bắt đầu của CGRAM
    HAL_Delay(1); //tạo độ trễ nhỏ để LCD có đủ thời gian làm việc
    for(uint8_t loop = 0; loop <= 63; loop++){ //vòng lặp chạy từ 0 đến 63 để ghi từng byte của mảng cgram_dat vào CGRAM
        lcd_send_data(cgram_dat[loop]);
        HAL_Delay(1);   //tạo độ trễ nhỏ giuawxx các lần ghi để đảm bảo dữ liệu được ghi chính xác
    }
}


int main(void){
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    lcd_config();
    lcd_write_cgram();

    while(1){
        
        lcd_gotoxy(0,2);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        display_text("V  L  TH NH",11); //hiển thị chuỗi tại vị trí vừa đặt con trỏ với 11 kí tự
        lcd_gotoxy(0,3);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 3
        lcd_send_data(0x00);    //gửi dữ liệu 0x00 lên màn hình LCD, nó là kí tự đặc biệt hàng 0 được lưu trong CGRAM
        lcd_gotoxy(0,6);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 6
        lcd_send_data(0x01);    //gửi dữ liệu 0x01 lên màn hình LCD, nó là kí tự đặc biệt hàng 1 được lưu trong CGRAM
        lcd_gotoxy(0,10);   //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 10
        lcd_send_data(0x02);    //gửi dữ liệu 0x02 lên màn hình LCD, nó là kí tự đặc biệt hàng 2 được lưu trong CGRAM
        lcd_gotoxy(1,4);    //đặt con trỏ tại hàng 1(hàng thứ 2) cột 4
        display_text("22673471",8); // hiển thị chuỗi với 8 kí tự
        HAL_Delay(5000);    //dừng chương trình 5s
        lcd_send_cmd(0x01); //xóa màn hình và đặt con trỏ về vị trí ban đầu

        lcd_gotoxy(0,0);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 0
        display_text("L NGUY NCH USANG",16);    //hiển thị chuỗi tại vị trí vừa đặt con trỏ với 16 kí tự
        lcd_gotoxy(0,1);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        lcd_send_data(0x01);    //gửi dữ liệu 0x01 lên màn hình LCD, nó là kí tự đặc biệt hàng 1 được lưu trong CGRAM
        lcd_gotoxy(0,6);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        lcd_send_data(0x03);    //gửi dữ liệu 0x03 lên màn hình LCD, nó là kí tự đặc biệt hàng 3 được lưu trong CGRAM
        lcd_gotoxy(0,10);   //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        lcd_send_data(0x04);    //gửi dữ liệu 0x04 lên màn hình LCD, nó là kí tự đặc biệt hàng 4 được lưu trong CGRAM
        lcd_gotoxy(1,4);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        display_text("22659121",8); // hiển thị chuỗi với 8 kí tự
        HAL_Delay(5000);    //dừng chương trình 5s
        lcd_send_cmd(0x01); //xóa màn hình và đặt con trỏ về vị trí ban đầu

        lcd_gotoxy(0,2);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        display_text("CAO V N KI N",12);
        lcd_gotoxy(0,7);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        lcd_send_data(0x05);    //gửi dữ liệu 0x05 lên màn hình LCD, nó là kí tự đặc biệt hàng 4 được lưu trong CGRAM
        lcd_gotoxy(0,12);   //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        lcd_send_data(0x01);    //gửi dữ liệu 0x01 lên màn hình LCD, nó là kí tự đặc biệt hàng 1 được lưu trong CGRAM
        lcd_gotoxy(1,3);    //đặt con trỏ tại hàng 0(hàng đầu tiên) cột 2
        display_text("1234567890",10);  // hiển thị chuỗi với 10 kí tự
        HAL_Delay(5000);    //dừng chương trình 5s
        lcd_send_cmd(0x01); //xóa màn hình và đặt con trỏ về vị trí ban đầu

    }
}

void SystemClock_Config(void){
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 4;
    RCC_OscInitStruct.PLL.PLLN = 168;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 4;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK){
        Error_Handler();
    }

    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                                |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK){
        Error_Handler();
    }
}


    static void MX_GPIO_Init(void){
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    __HAL_RCC_GPIOH_CLK_ENABLE();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOD_CLK_ENABLE();

    HAL_GPIO_WritePin(GPIOD, D4_Pin|D5_Pin|D6_Pin|D7_Pin
                            |E_Pin|RS_Pin|RW_Pin, GPIO_PIN_SET);

    GPIO_InitStruct.Pin = D4_Pin|D5_Pin|D6_Pin|D7_Pin
                            |E_Pin|RS_Pin|RW_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

    }


    void Error_Handler(void){
    __disable_irq();
    while (1)
    {
    }
    /* USER CODE END Error_Handler_Debug */
    }

    #ifdef  USE_FULL_ASSERT
    /**
     * @brief  Reports the name of the source file and the source line number
     *         where the assert_param error has occurred.
     * @param  file: pointer to the source file name
     * @param  line: assert_param error line source number
     * @retval None
     */
    void assert_failed(uint8_t *file, uint32_t line)
    {
    /* USER CODE BEGIN 6 */
    /* User can add his own implementation to report the file name and line number,
        ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
    /* USER CODE END 6 */
    }
    #endif /* USE_FULL_ASSERT */
