// viet ham in ra cac uoc cua 1 so bat ki
#include<stdio.h>
#include<conio.h>
// ham tim uoc
int ktuoc(int n){
    for (int i = 1; i <= n; i++){
        if (n % i == 0)
            printf("%d ", i);
    }
}

void main(){
    int x;
    scanf("%d", &x);
    ktuoc(x);
getch();
}