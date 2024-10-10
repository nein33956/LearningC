//viết chương trình yêu cầu người dùng nhập vào một số nằm trong khoảng từ 1 đến 100. Nếu người dùng nhập số khác thì yêu cầu nhập lại.

#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    scanf("%d", &n);
    do{
        if(n > 100) printf("Nhap lai!");
    }while(n <= 100);
getch();
}
