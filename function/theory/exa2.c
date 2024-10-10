//xay dung ham tinh tong cac so tu 1 toi n
#include<stdio.h>
#include<conio.h>
#include<math.h>

// ham tinh tong cac so tu 1 toi n
// kieu du lieu o kieu nao thi kq cung o kieu do
int tong(int n){
    int sum=0;
    for(int i=1; i <= n; i++ )
    sum += i;
    return sum;
}

void main(){
    int m; 
    scanf("%d", &m);
    printf("%d", tong(m));
getch();    
}