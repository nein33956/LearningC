//in ra n so fibonaci dau tien
//so fibonaci la so co tiep theo co tong bang 2 so truoc
/*input 5:   output: 0 1 1 2 3*/

#include<stdio.h>
#include<conio.h>
void solve(int n){
    printf("0 1 "); // in ra thu cong 2 so dau cua day fibonaci
    long long fn2 = 0, fn1 = 1; //gan 2 gia tri fn1 va fn2 cho 2 gia tri dau
    for(int i = 3; i <= n; i++){
        long long fn = fn1 + fn2;
        printf("%lld ", fn);
        fn2 = fn1;
        fn1 = fn;
    }
}
void main(){
    //int t;
    //while(t--){
        int n;
        scanf("%d", &n);
        solve(n);
    //}
getch();
}