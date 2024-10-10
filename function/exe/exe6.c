/*viet chuong trinh kiem tra trong doan a va b co bao nhieu so nguyen to
va tat ca cac chu so cua so cung la so nguyen to*/
/*input: 2       output:
         10 100         4
         1234 5678      26*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int digitPrime(int n){
    while(n){
        int tach = n % 10;
        if(tach != 2 && tach != 3 && tach != 5 && tach != 7)
            return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        for(int i = a; i <= b; i++){
            if(digitPrime(i) && prime(i))
                count ++;
        }
        printf("%d\n", count);
    }
getch();
return 0;
}
