// viet ham kiem tra so chinh phuong

#include<stdio.h>
#include<conio.h>
#include<math.h>
//ham kiem tra so chinh phuong
int sochinhphuong(int n){
    int can = sqrt(n);
    if(can * can == n){
        printf("Yes");
    }else printf("No");
    return n;
}

void main(){
    int x;
    scanf("%d", &x);
    sochinhphuong(x);
getch();
}