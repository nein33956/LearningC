//Cho mảng 2 chiều A có kích thước MxN số nguyên.
// Phần tử A[i,j] được gọi là phần tử yên ngựa nếu nó là phần tử nhỏ nhất trong hàng i đồng thời là phần tử lớn nhất trong cột j.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//ham tim diem yen ngua
int timmin(int a[][100], int m, int n){
    int min=a[m][0];
    for (int k = 1; k < n; k++){
        if(a[m][k] < min)
            min = a[m][k];}
    return min;
}

int timmax(int a[][100], int m, int n)
{
    int max=a[0][n];
    for (int k = 1; k < m; k++){
        if (a[k][n]>max)
            max = a[k][n];}
    return max;
}

void main(){
    int m, n, a[100][100], kt = 0;
    printf("Nhap so dong va so cot cua mang: ");
    scanf("%d%d", &m, &n);
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
    for (int i = 0; i < n; i++){    
        for (int j = 0; j < m; j++){
            if (a[i][j] == timmin(a, i, m) && a[i][j] == timmax(a, n, j)){
                printf ("a[%d][%d] = %d la mot diem yen ngua \n", i+1, j+1, a[i][j]);
                kt++;
            }
        }
    }
    if (kt == 0) printf("\n Khong co diem yen ngua nao!");
getch();
}

