//toan tu tang giam cua con tro
#include<stdio.h>
#include<conio.h>
void main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = a;
    printf("%d\n", *ptr);
    ++ptr;
    printf("%d\n", *ptr);
    --ptr;
    printf("%d\n", *ptr);
    ptr += 3;
    printf("%d", *ptr);
getch();
}