//viet ham kiem tra so doi xung
#include<stdio.h>
#include<conio.h>
//ham kiem tra so dao nguoc
int sodaonguoc(int n){ 
    int a = 0; 
    while (n > 0) {
        a = a * 10 + n % 10;
        n /= 10;
    }
    return a;
}
//ham kiem tra so doi xung
int sodoixung(int a){
    if(a == sodaonguoc(a)) return 1;
    else return 0;
}

void main(){
    int x;
    scanf("%d", &x);
    int check = sodoixung(x);
    if(check == 1){
        printf("Yes");
    }else printf("No");
getch();
}