/*tinh tong cac so tu 1 toi n*/
#include <stdio.h>
#include <conio.h>
void main(){
    int n; 
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1; i<=n; i++)
        sum += i;
        printf("%d", sum);
getch();
}