#include<stdio.h>
#include<conio.h>
#include<math.h>

//xay dung ham tim so lon hon trong 2 so
int max(int a, int b){
    if(a > b) return a;
    else return b;
}

void main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", max(x, y));
    getch();
}