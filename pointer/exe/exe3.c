//Chương trình C để tính tổng giá trị các phần tử trong mảng bởi sử dụng con trỏ
#include<stdio.h>
#include<conio.h>
void main(){
    int a[10];
    int i, sum = 0;
    int *ptr;
    printf("\nNhap 10 phan tu: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    ptr = a; // a = &a[0] 
    for (i = 0; i < 10; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Tong cac phan tu cua mang la: %d", sum);
getch();
}