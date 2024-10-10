#include<stdio.h>
#include<conio.h>
#include<math.h>

int tong(int n){
    return n*(n+1)/2;
}

void xin_chao(){
    printf("Xin Chao.\n");
}

void main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", tong(a));
    xin_chao();
getch();
}
