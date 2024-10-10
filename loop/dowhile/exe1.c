//nhap gia tri cua n la so nguyen k am, neu sai thi nhap lai
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    do{
        scanf("%d",&n);
        if(n<0) printf("Nhap lai\n");
    }while(n<0);
    getch();
}