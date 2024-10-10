// ham in ra so nguyen to khong vuot qua n
#include<stdio.h>
#include<math.h>
#include<conio.h>
int ktsonguyento(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
void main(){
    int x;
    scanf("%d", &x);
    for(int i = 1; i <= x; i++){
        if(ktsonguyento(i))
        printf("%d ", i);
    }
getch();
}