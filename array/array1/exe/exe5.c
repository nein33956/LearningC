// viet chuong trinh tinh tong cac so am co trong mang
#include<stdio.h>
#include<conio.h>
//ham tinh tong cac so am 
int tongam(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0) sum += a[i];
    }
    printf("Tong cac so am trong mang bang: %d", sum);
}
void main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("Phan tu thu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    tongam(a, n);
getch();
}