// ham sang so nguyen to voi nhieu testcase
// dong dau tien la so testcase
//input: 4    output: 
/*       2           yes
         3           yes
         20          no
        188          no*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int prime[10001];
void sang(){
    for(int i = 0; i <= 10000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
        for(int i = 2; i <= 100; i++){
            if(prime[i]){
                for(int j = i*i; j <= 10000; j += i)
                    prime[j] = 0;              
            }
        }
}

int main(){
    sang();
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(prime[n])
            printf("YES");
        else printf("NO");
    }
getch();
return 0;
}