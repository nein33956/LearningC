//tinh tong cac phan tu duong cua mang
#include<stdio.h>
#include<conio.h>

int tongduong(int a[][100], int m, int n){
    int tong = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > 0) tong += a[i][j];
        }
    }
    printf("Tong cac phan tu duong trong mang la: %d", tong);
}

void main(){
    int m, n, a[100][100];//khai bao m la hang n la cot
    printf("Nhap so dong va so cot cho mang: ");
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    tongduong(a, m, n);
getch();
}