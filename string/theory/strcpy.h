//ham strcpy sao chep chuoi ki tu tu a sang b
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char a[20], b[20];
    gets(a);
    gets(b);
    printf("%s", strcpy(a, b));
getch();
}