//viet chuong trinh liet ke n so nguyen to dau tien
/*input: 5   output: 2
                     3
                     5
                     7
                     11*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        return 0;
    }
    return n > 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int i = 0, cnt = 0;
    while(cnt < n){
        if(prime(i)){
            printf("%d\n", i);
        ++cnt;
        }
    ++i;
    }
getch();
return 0;
}