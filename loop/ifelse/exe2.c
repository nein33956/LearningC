/*tinh tong hieu tich thuong 2 so*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
         void main(){
            int a = 200, b = 100;
            char kitu;
            scanf("%c", &kitu);
        switch(kitu){
            case '+':
            printf("%d", a+b); break;
            case '-':
            printf("%d", a-b); break;
            case '*':
            printf("%d", a*b); break;
            case '/':
            printf("%d", a/b); break;
        }
        getch();
         }