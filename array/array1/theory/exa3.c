// tim phan tu lon nhat trong mang
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
//kiem tra max
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    printf("Phan tu lon nhat trong mang la: %d", max);
getch();
}