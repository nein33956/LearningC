// truyen mang vao ham
#include<stdio.h>
#include<conio.h>
void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
//tong phan tu trong mang
int tong(int a[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res += a[i];
    }
    return res;
}

void main(){
    int x, a[1000];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &x);
    //goi ham
    nhap(a, x);
    xuat(a, x);
    printf("\nTong cac phan tu trong mang la: %d", tong(a, x));
getch();
}