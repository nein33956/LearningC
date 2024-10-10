//tinh tong chu so cac so vua nhap
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n!=0){
        sum += n % 10;//cong chu so hang don vi vao sum
        n/=10;
    }
    printf("%d",sum);
    printf("\nGia tri cua bien n sau cung la: %d", n);
    getch();
}