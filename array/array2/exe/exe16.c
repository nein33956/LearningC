//in ra ma tran chuyen vi
/*input: 3 3                 output:
        1 2 3                1 4 7
        4 5 6                2 5 8
        7 8 9                3 6 9*/
#include<stdio.h>
#include<conio.h>

int main(){
    int a[100][100], m, n;
    printf("Nhap so hang va so cot: ");
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
    printf("\n");
    //in cot
    for(int j = 0; j < n; j++){
        for(int i = 0; i < m; i++){
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
getch();
}