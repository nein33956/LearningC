// tim phan tu nho nhat trong mang
#include<stdio.h>
#include<conio.h>

void main(){
    int n, a[n];
    printf("Nhap so phan tu cua mang:");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Phan tu thu a[%d] :", i);
        scanf("%d", &a[i]);
    }
//kiem tra min
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min) min = a[i];
    }
    printf("Phan tu nho nhat trong mang la: %d", min);
getch();
}