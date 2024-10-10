//ham strrev() tra ve chuoi dao nguoc cua chuoi ban dau
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void main(){
    char a[10001];
    gets(a);
    printf("Dao nguoc chuoi la: %s", strrev(a));
getch();
}