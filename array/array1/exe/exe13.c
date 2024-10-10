//dem so luong so chan va so le trong mang
#include<stdio.h>
#include<conio.h>
int chanle(int a[], int n){
    int demchan = 0, demle = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            ++demchan;
        }else ++demle;
    }
    printf("%d %d", demchan, demle);
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
    chanle(a, n);
getch();
}