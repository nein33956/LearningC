//kiem tra mang giam
#include<stdio.h>
#include<conio.h>
int check(int a[], int n){
    for(int i = 0; i < n-1; i++){
        if(a[i] <= a[i+1])
            return 0;
    }
    return 1;
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
    if(check(a, n)){
        printf("Yes");
    }else printf("No");
getch();
}