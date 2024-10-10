// ham sang so nguyen to tren doan
// input 4 20
// output 5 7 11 13 17 19
#include<stdio.h>
#include<conio.h>
#include<math.h>

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}

void sang(int l, int r){
    int prime[r - l + 1]; // khai bao mang co kich thuoc la doan
    for(int i = 0; i <= r - l + 1; i++){// duyet vong lap tu 0 toi doan
        prime[i] = 1;// gan cho tat ca cac pt trong doan deu la so nguyen to
    }
    for(int i = 2; i <= sqrt(r); i++){//duyet cac so tu 2 toi can r
        for(int j = max(i*i, (l+i-1)/i*i); j <= r; j +=i){//duyet cac boi cua i nam trong doan tu left toi right
            prime[j - l] = 0;
        }
    }
    for(int i = max(l, 2); i <= r; i++){
       if(prime[i - l])
       printf("%d ", i);
    }
}

int main(){
    int l, r;
    scanf("%d %d", &l, &r);
    sang(l, r);
getch();
return 0;
}