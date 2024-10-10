//sap xep theo tong cac chu so tang dan, so co gia tri nho hon xep sau
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int sumdigit(int n){
    int res = 0;
    while(n){
        res += n%10;
        n /= 10;
    }
    return res;
}
//khi a dung truoc b trong thu tu sap xep thi tra ve so am (-1) a<b
//khi a dung sau b trong thu tu sap xep thi tra ve so duong (+1) a>b
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(sumdigit(*x) != sumdigit(*y))
        return sumdigit(*x) - sumdigit(*y);
    return *y - *x;
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
    qsort(a, n, sizeof(int), cmp);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
getch();
}