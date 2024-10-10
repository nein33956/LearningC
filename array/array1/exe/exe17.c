//dem va liet ke cac so le trong mang
#include<stdio.h>
#include<conio.h>
int sole(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1)
            printf("%d ", a[i]);     
    }
}
int dem(int a[], int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1)
        ++dem;
    }
    return dem;
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
    sole(a, n);
    printf("\nCo %d so le!", dem(a, n));
getch();
}
