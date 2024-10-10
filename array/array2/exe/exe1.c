//tinh tong tat ca phan tu cua mang 2 chieu
#include<stdio.h>
#include<conio.h>

int sum(int a[][100], int m, int n){
    int res = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            res += a[i][j];
        }
    }
    printf("Tong cac phan tu cua mang la: %d", res);
}

int main(){
    int m, n, a[100][100];
    printf("Nhap so hang va so cot cua mang: ");
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
    sum(a, m, n);
getch();
}