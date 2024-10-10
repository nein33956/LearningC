// Tinh tong S(n) = 1 + 1/2 + 1/3 +...+ 1/n
#include<stdio.h>
#include<conio.h>
#include<math.h>

double tong(int n){
    double res=0;
    for (int i = 1; i <= n; i++)
        res += (double)1 / i;
        return res;   
}

void main(){
    int x;
    scanf("%d", &x);
    double res = tong(x);
    printf("%.2lf", res);
getch();
}