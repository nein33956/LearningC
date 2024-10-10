//nhap vao mot xau ki tu va chuyen xau ki tu do thanh in thuong
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char a[1005];
        fgets(a, 1005, stdin);
        printf("%s", strlwr(a));
    }
getch();
}