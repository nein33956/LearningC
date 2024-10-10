/*Nhập từ bàn phím mảng số nguyên gồm n phần tử.
Tính trung bình cộng các số lẻ ở vị trí chẵn
Tìm số lớn nhất trong mảng vừa nhập
Tìm vị trí các số nhỏ nhất trong mảng
Đếm các số chính phương có trong mảng
Hiện thị các số nguyên tố có trong mảng lên màn hình
Thay thế các phần tử âm có trong mảng bằng giá trị 0
Xóa các phần tử âm có trong mảng*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
/*ham tinh trung binh cong cac so le o vi tri chan
vi tri chan=chi so le*/
int solevitrichan(int a[], int n){
    int sum = 0;//tao bien sum de tinh tong
    int count = 0;//dem cac phan tu le de tinh tbc
    for(int i = 1; i < n; i += 2){
        if(a[i] % 2 != 0){
            sum += a[i];
            count ++;
        }
    }
    printf("\nTrung binh cong so le o vi tri chan la: %f", (float)sum / count);
}

//ham tim so lon nhat va vi tri trong mang
int solonnhat(int a[], int n){
    int max = a[0];
    int max_index = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
            max_index = i;
        }
    }
    printf("\nPhan tu lon nhat trong mang la: %d", max);
    printf("\nVi tri phan tu lon nhat trong mang la: %d", max_index + 1);
}

//ham tim so nho nhat va vi tri trong mang
int sonhonhat(int a[], int n){
    int min = a[0];
    int min_index = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
            min_index = i;
        }
    }
    printf("\nPhan tu nho nhat trong mang la: %d", min);
    printf("\nVi tri phan tu nho nhat trong mang la: %d", min_index + 1);
}

//ham dem so chinh phuong
int demsochinhphuong(int a[], int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        int can = sqrt(a[i]);
        if(can * can == a[i])
        dem++;
    }
    printf("\nMang co %d so chinh phuong!", dem);
}

//ham hien thi cac so nguyen to
int songuyento(int a[], int n){
    printf("\nCac so nguyen to co trong mang la: ");
    for(int i = 0;i < sqrt(n);i++){
        // Kiem tra a[i] co phai so nguyen to?
        // gia su no la so nguyen to
        // Neu no chia het cho so bat ky trong [2, a[i]] -> khong phai so nguyen to
        int check = 1;
        for(int j = 2; j < a[i]; ++j){
            if(a[i] % j == 0) check = 0;
        }
        if(a[i] >= 2 && check == 1)
            printf("%d ", a[i]);
    }
}

//ham xoa so am
int xoasoam(int a[], int n){
     int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            a[j] = a[i];
            j++;
        }
    }
    for (int i = j; i < n; i++){
        a[i] = 0;//gan gia tri 0 cho cac pt con lai sau khi xoa
    }
    printf("\nDay so sau khi xoa la:");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("Phan tu thu a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    solevitrichan(a, n);
    printf("\n");
    solonnhat(a, n);
    printf("\n");
    sonhonhat(a, n);
    printf("\n");
    demsochinhphuong(a, n);
    printf("\n");
    songuyento(a, n);
    printf("\n");
    xoasoam(a, n);
getch();
}