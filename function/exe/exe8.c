//cap so nguyen to co tong bang n
/*input: 2         output:
         4                2 2
         6                3 3*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime[10001];
void sang(){
    for(int i = 1; i <= 10000; i++){
        prime[i] = 1;
    prime[1] = prime[0] = 0;
        for(int i = 2; i <= 100; i++){
            if(prime[i]){
                for(int j = i*i; j <= 10000; j += i)
                    prime[j] = 0;              
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    sang();
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 2; i <= n/2; i++){
            if(prime[i] && prime[n-i]){
                printf("%d %d\n", i, n - i);
            }
        }
    }
getch();
return 0;
}