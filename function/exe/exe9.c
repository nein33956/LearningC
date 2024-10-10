//so thuan nguyen to
/*mot so duoc coi la thuan nguyen to neu tat ca cac chu so deu la so nguyen to
va tong tat ca cac chu so do la so nguyen to*/
/*input:2        output:
        23 199           1
        2345 6789        15*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
//ham kiem tra so nguyen to
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        return 0;
    }
    return n > 1;
}
//ham kiem tra tat ca cac chu so la snt
int csnt(int n){
    while(n){
        int r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7)
            return 0;
        n /= 10;
    }
    return 1;
}
//ham tinh tong cac so nguyen to
int tongnt(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return prime(sum);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(prime(i) && csnt(i) && tongnt(i))
                ++cnt;
        }
        printf("%d", cnt);
    }
getch();
return 0;
}
