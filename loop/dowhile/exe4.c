//in ra cac so chan tu 1 toi 100
#include<stdio.h>
#include<conio.h>

void main(){
    int i = 1;
    do{
        if(i % 2 == 0) printf("%d ", i);
        i++;
    }while(i <= 100);
getch();
}