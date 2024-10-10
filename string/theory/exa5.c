#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void main(){
    char a[1000];
    fgets(a, 20, stdin);
    a[strlen(a) - 1] = '\0';
    printf("%d", strlen(a));
getch();
}