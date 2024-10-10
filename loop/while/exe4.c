// in ra cac so chan nho hon 100
#include<stdio.h>
#include<conio.h>

void main(){
    int n = 2;
    while (n <= 100)
    {
        if(n % 2 == 0)
            printf("%d ", n);
        n += 2;
    }
getch();   
}