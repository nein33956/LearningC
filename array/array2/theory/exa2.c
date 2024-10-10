//tim phan tu nho nhat trong mang 2 chieu
#include<stdio.h>
#include<conio.h>
void main(){
    int m, n;
    printf("Nhap so hang va so cot cho mang: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
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
    int min = a[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] < min) min = a[i][j];
        }
    }
    printf("Gia tri nho nhat trong mang la: %d", min);
getch();
}