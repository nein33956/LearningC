//tich 2 so lon nhat trong mang
#include<stdio.h>
#include<conio.h>
long long max(long long a, long long b){
    return a<b ? a:b;
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
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
    int max1 = -10001, max2 = -100001, min1 = 100001, min2 = 100001;
    for(int i = 0; i < n; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }else if(a[i] > max2)
                max2 = a[i];
        if(a[i] < min1){
            min2 = min1;
            min1 = a[i];
        }else if(a[i] < min2)
                min2 = a[i];
    }
    long long res = max(1ll*max1*max2, 1ll*min1*min2);
    printf("%lld", res);
getch();
}
