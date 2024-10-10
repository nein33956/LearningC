//Tính tong cac phan tu tren duong cheo chinh cua ma tran
#include<stdio.h>
#include<conio.h>
int tongcheochinh(int a[][100], int m, int n){
    int sum = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i == j) sum += a[i][j];
        }
    }
    printf("Tong cac phan tu tren duong cheo chinh la: %d", sum);
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
    tongcheochinh(a, m, n);
getch();
}