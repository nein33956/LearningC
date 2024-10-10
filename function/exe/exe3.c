//ham in ra cac so nguyen to tu 1 toi n su dung thuat toan eratosthenes
//input 4
//output 2 3
#include<stdio.h>
#include<math.h>
#include<conio.h>

int nguyento[10001];// khai bao mang co kich thuoc n+1
// Ham sang so nguyen to
void sang(){
    //coi tat ca cac ptu ban dau deu la so nguyen to
    // nguyento[i] = 1 la so nguyen to
    // nguyento[i] = 0 khong la so nguyen to
    for(int i = 0; i <= 10000; i++){
        nguyento[i] = 1;
    //loai thu cong  gia tri 0 va 1
        nguyento[0] = nguyento[1] = 0;
        for(int i = 2; i <= 100; i++){
            //neu i la so nguyen to thi duyet cac boi cua i va cac boi do khong la so nguyen to
            if(nguyento[i]){
                for(int j = i*i; j <= 10000; j += i){//duyet cac boi cua i, vd 2 la songuyento nen loai 2binh la 4,
                    nguyento[j] = 0;// j+=i sau do loai 4+2=6..j khong con la so nguyen to nua
                }
            }
        }
    }
}

int main(){
    sang();
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        if(nguyento[i])
        printf("%d ", i);
    }
getch();
return 0;
}
