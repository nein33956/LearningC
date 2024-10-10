//sap xep sao cho cac so chan xep truoc theo thu tu giam dan
//le xep sau theo thu tu tang dan
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//khi a dung truoc b trong thu tu sap xep thi tra ve so am (-1) a<b
//khi a dung sau b trong thu tu sap xep thi tra ve so duong (+1) a>b
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    //x chan, y le
    if(*x % 2 == 0 && *y % 2 != 0) return -1;
    if(*x % 2 != 0 && *y % 2 == 0) return 1;
    if(*x % 2 == 0 && *y % 2 == 0) return *y - *x;
    return *x -*y;
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