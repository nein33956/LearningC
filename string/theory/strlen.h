//ham strlen() tra ve do dai cua chuoi khong tinh ki tu null
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void main(){
    char a[20];
    gets(a);
    puts(a);
    printf("Do dai cua chuoi: %d", strlen(a));
getch();
}