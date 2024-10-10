//hoan vi hai duong cheo cua ma tran vuong
/*input: 3 3          output:
        1 2 3                3 2 1
        4 5 6                4 5 6
        7 8 9                9 8 7*/
#include<stdio.h>
#include<conio.h>

int main(){
    int m, n, a[100][100];
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
            printf("%2d ", a[i][j]);
        }
    printf("\n");
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int tmp;
            tmp = a[i][i];
            a[i][i] = a[i][n-i-1];
            a[i][n-i-1] = tmp;
        }
    }
    printf("\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%2d ", a[i][j]);
        }
    printf("\n");
    }
getch();
}