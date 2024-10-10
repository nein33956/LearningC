//sap xep mang tang dan va giam dan
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//khi a dung truoc b trong thu tu sap xep thi tra ve so am (-1) a < b
//khi a dung sau b trong thu tu sap xep thi tra ve so duong (+1) a > b
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(*x < *y) return -1;//return 1 de giam dan
    else return 1;//return -1
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