//Ktra nam nhuan
#include<stdio.h>
#include<conio.h>
        void main(){
            int n;
            scanf("%d", &n);
            if((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)){
                printf("Nam nhuan!");
            }else printf("K la nam nhuan!");
        getch();
        }