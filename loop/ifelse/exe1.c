/*nhap vao thang va in ra so ngay trong thang
-1 3 5 7 8 10 12 co 31 ngay
-4 6 9 11 co 30 ngay
-2 co 28 ngay*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
    void main(){
         int n;
            printf("Nhap vao thang:\t");
            scanf("%d",&n);
    switch(n){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
            printf("Thang co 31 ngay!"); break;
        case 4 : case 6 : case 9 : case 11:
            printf("Thang co 30 ngay!"); break;
        case 2 :
            printf("Thang co 28 ngay!"); break;
        default :
            printf("Khong hop le moi nhap lai!!!");
    }
    getch();
}