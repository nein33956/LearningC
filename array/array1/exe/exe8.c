/*truyen mang vao ham*/
/*truyen max min mang vao ham*/
#include<stdio.h>
#include<conio.h>
#define SIZE 20
// khai báo các nguyên mẫu hàm
void Nhap(int *a, int *n);
void Xuat(int *a, int n); 
// Định nghĩa các hàm
void Nhap(int *a, int *n){ 
     do{
       printf("Nhap so phan tu:");
       scanf("%d", &(*n));
        }while(*n < 1 || *n > SIZE);
     for(int i = 0; i < *n; i++){
        printf("pt thu %d:", i);
        scanf("%d", &a[i]);
    } 
  }
void Xuat(int *a, int n) {
     for(int i = 0; i < n; i++) 
        printf("%d\t", a[i]);
        printf("\n");
    } 
int max(int *a, int n){
    int max=a[0];
    for(int i=1; i<n; i++){
               if(a[i]>max) max=a[i];
    }
    return max;
}
int min(int *a, int n){
    int min=a[0];
    for(int i=1; i<n; i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}
void main() {
     int a[SIZE], n;
     Nhap(a, &n); 
     Xuat(a, n);
     printf("Gia tri lon nhat la: %d\n", max(a, n));
     printf("Gia tri nho nhat la: %d", min(a, n));
getch();
}
