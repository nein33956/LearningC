/*Nhập 1 dãy số thực không quá 50 phần tử, đưa ra màn hình tổng các số dương trong dãy.
Xóa tất cả các số âm có trong dãy.*/
#include<stdio.h>
#include<conio.h>
// ham tinh tong so duong trong mang
int tong(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= 0)
        sum += a[i];
    }
    printf("\nTong cac so duong trong day la: %d", sum);
}
//ham xoa cac so am trong mang
int xoaso(int a[], int n){
    int j = 0;
    for (int i = 0; i < n; i++){
        if (a[i] >= 0) {
            a[j] = a[i];
            j++;
        }
    }
    for (int i = j; i < n; i++){
        a[i] = 0;//gan gia tri 0 cho cac pt con lai sau khi xoa
    }
    printf("\nDay so sau khi xoa la:");
    for(int i = 0; i < n; i++){
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
    tong(a, n);
    xoaso(a, n);
getch();
}