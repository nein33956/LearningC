//viet ham tim so dao nguoc cua 1 so
#include<stdio.h>
#include<conio.h>
//ham kiem tra so dao nguoc
int sodaonguoc(int n){ 
    int a = 0; 
    while (n > 0) {
        a = a * 10 + n % 10;
        n /= 10;
    }
    return a;
}

void main(){
    int x;
    scanf("%d", &x);
    printf("So dao nguoc la: %d", sodaonguoc(x));
getch();
}