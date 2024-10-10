//hoan vi hai hang cua ma tran
/*input: 3 3          output:
        1 2 3                7 8 9
        4 5 6                4 5 6
        7 8 9                1 2 3
        1 3                        */
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
    //khai bai hai bien x, y de nhap so hang va so cot can hoan vi
    int x, y;
    printf("Nhap so hang muon hoan vi: ");
    scanf("%d %d", &x, &y);
    //muon hoan vi hai hang thi ta hoan vi tung phan tu cua cot
    for(int j = 0; j < n; j++){
        //hoan vi a[x][j] va a[y][j]
        int tmp = a[x-1][j];
        a[x-1][j] = a[y-1][j];
        a[y-1][j] = tmp;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%2d ", a[i][j]);
        }
    printf("\n");
    }
getch();
}