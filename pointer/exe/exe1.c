//cong hai so su dung con tro
#include<stdio.h>
#include<conio.h>
void main(){
    int a = 10;//khai bao + khoi tao gia tri cho bien a
    int b = 20;//khai bao + khoi tao gia tri cho bien b
    int *ptr1, *ptr2;//khai bao con tro ptr1 va ptr2 trong int
    ptr1 = &a;//khoi tao bien con tro ptr1 co gia tri bang dia chi cua bien a
    ptr2 = &b;//khoi tao bien con tro ptr2 co gia tri bang dia chi cua bien b
    int num = *ptr1 + *ptr2;
    printf("Tong la: %d", num);
getch();
}