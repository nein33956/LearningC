/*so dep: mot so duoc coi la so dep neu no la so nguyen to va tong chu so cua no la 1 so trong day fibonaci*/
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

int solve(long long n){
    if(n == 0 || n == 1)
        return 1;
    long long fn2 = 0, fn1 = 1;
    for(int i = 3; i <= 20; i++){
        long long fn = fn2 + fn1;
        //printf("%lld ", fn);
        if(fn == n)
            return 1;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

int sum(int n){
    int ans = 0;
    while(n){
        ans += n % 10;
        n /= 10;
    }
    return solve(ans);
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int ok = 0; //check xem so dep co ton tai trong khoang tu a den b hay khong
    for(int i = a; i <= b; i++){
        if(sum(i) && prime(i)){
            printf("%d ", i);
            ok = 1;
        }
    }
    if(!ok) printf("-1");
getch();
}