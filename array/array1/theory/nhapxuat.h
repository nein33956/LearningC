//nhap xuat mang 1 chieu co n phan tu
/*
datatype arrayname[sizeofarray];
*/
#include<stdio.h>
#include<conio.h>

void main(){
    int n; //Khai bao n
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n); //Nhập n là số lượng phần tử từ bàn phím
    int a[n]; //Khai báo mảng a gồm n phần từ
 
//Duyệt vòng lặp để nhập n phần tử
    for(int i = 0; i < n; i++){
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
getch();
}