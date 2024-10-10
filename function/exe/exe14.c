// viet ham tinh tong cac uoc cua 1 so
#include<stdio.h>
#include<conio.h>

int ktuoc(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        sum += i;
    }
    return sum;
}

void main(){
    int x;
    scanf("%d", &x);
    printf("%d", ktuoc(x));
getch();
}