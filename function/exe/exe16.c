//Viết chương trình C để nhập một số nguyên và tìm lập phương của số đó.
#include<stdio.h>
#include<conio.h>
//ham tinh lap phuong
int lapphuong(int x){
    int y;
    y = x*x*x;
    return y;
}

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", lapphuong(n));
getch();
}