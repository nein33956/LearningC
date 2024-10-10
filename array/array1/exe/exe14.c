//liet ke cac so nguyen to trong mang
#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}
int main(){
    int n;
    printf("Nhap sp phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        if(prime(a[i]))
            printf("%d ", a[i]);
    }
getch();
}