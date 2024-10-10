//dem so luong chu so
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int ans=0;  //dem so luong chu so
    while(n!=0){
        ++ans;  //tang so luong chu so cua n len 1 don vi
        n/=10;
    }
    printf("%d",ans);
    printf("\nGia tri cua bien n sau cung la: %d", n);
    getch();
}