//viet chuong trinh tim phan tu lon nhat va nho nhat cua mang 2 chieu va vi tri cua chung
#include<stdio.h>
#include<conio.h>

int max(int a[][100], int m, int n){
    int max = a[0][0];
    int x_max = 0;
    int y_max = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > max){
                max = a[i][j];
                x_max = i + 1;
                y_max = j + 1;
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Nam o dong %d, cot %d", x_max, y_max);
}

int min(int a[][100], int m, int n){
    int min = a[0][0];
    int x_min = 0;
    int y_min = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] < min){
                min = a[i][j];
                x_min = i + 1;
                y_min = j + 1;
            }
        }
    }
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    printf("Nam o dong %d, cot %d", x_min, y_min);
}

void main(){
    int m, n, a[100][100];
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
    max(a, m, n);
    printf("\n");
    min(a, m, n);
getch();
}