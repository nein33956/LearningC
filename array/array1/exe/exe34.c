//dem so lan xuat hien cua cac phan tu
#include<stdio.h>
#include<conio.h>
int cnt[10001] = {0};
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
        cnt[a[i]]++;//dem so lan xuat hien cua tung phan tu
    }
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] != 0){
            printf("%d %d\n", a[i], cnt[a[i]]);
            cnt[a[i]] = 0;
        }
    }
getch();
}