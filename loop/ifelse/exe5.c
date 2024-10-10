//Viết một chương trình C++ để nhập lương nhân viên, tính thuế thu nhập và lương ròng (số tiền lương thực sự mà nhân viên đó nhận được). Với các thông số giả sử như sau (không theo luật lương, chỉ là con số giả sử để dễ tính toán):

//30% thuế thu nhập nếu lương là 15 triệu.
//20% thuế thu nhập nếu lương từ 7 đến 15 triệu.
//10% thuế thu nhập nếu lương dưới 7 triệu.
#include<stdio.h>
#include<math.h>
#include<conio.h>

void main(){
    int n;
    printf("Nhap so tien luong: ");
    scanf("%d", &n);
    float thue, luongrong = 0;
    if(n >= 15){
        thue = 0.3 * n;
    }else if (n >= 7 && n < 15)
    {
        thue = 0.2 * n;
    }else if(n < 7){
        thue = 0.1 * n;
    }
    luongrong = n - thue;
    printf("Tien thue la: %.2f\n", thue);
    printf("Luong sau thue la: %.2f", luongrong);
getch();  
}
