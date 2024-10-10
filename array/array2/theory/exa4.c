//truyen mang vao ham
#include<stdio.h>
#include<conio.h>
void nhap(int a[][100], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuat(int a[][100], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int m, n, a[100][100];
    printf("Nhap so hang va so cot: ");
    scanf("%d%d", &m, &n);
    nhap(a, m, n);
    xuat(a, m, n);
getch();
}
