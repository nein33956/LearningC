//ham strcat() de noi hai chuoi lai voi nhau
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void main(){
    char a[10] = "vo le";
    char b[10] = " thanh";
    strcat(a, b);
    printf("%s", a);
getch();
}