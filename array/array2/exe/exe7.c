//tinh tong cac hang cua ma tran
/*input: 3 3              output:
        1 2 3                    6
        4 5 6                    15
        7 8 9                    24*/
#include<stdio.h>
#include<conio.h>
int tonghang(int a[][100], int m, int n){
    //duyet qua cac phan tu o hang i bang 0
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
    printf("\n%d ", sum);
    }
}

int main(){
    int m, n, a[100][100];
    printf("Nhap so hang va so cot cua ma tran: ");
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
    tonghang(a, m, n);
getch();
}