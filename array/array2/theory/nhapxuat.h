//nhap xuat mang 2 chieu co m dong va n cot
/*
datatype arrayname[so dong][so cot];
*/
#include<stdio.h>
#include<conio.h>
//i la dong va j la cot
void main(){
    int m, n;//khai bao m la hang n la cot
    printf("Nhap so dong va so cot cho mang: ");
    scanf("%d %d", &m, &n);
    int a[m][n];//khai bao mang 2 chieu gom m dong va n cot
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
getch();
}