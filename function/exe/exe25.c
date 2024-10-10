//tinh gia thua so nguyen to
#include<stdio.h>
#include<conio.h>
long long giaithua(int n){
    long long tich = 1;
    for(int i = 1; i <= n; i++){
        tich *= i;
    }
    printf("%lld", tich);
}
int main(){
    long long n;
    scanf("%lld", &n);
    giaithua(n);
getch();
}