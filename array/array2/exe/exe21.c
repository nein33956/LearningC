//sap xep cac phan tu cua ma tran theo hang
/*input: 3 3         output
        1 4 1             1 1 4
        2 9 8             2 8 9
        3 3 1             1 3 3*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(*x < *y) return -1;
    else return 1;
}

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
            printf("%3d ", a[i][j]);
        }
    printf("\n");
    }
    for(int i = 0; i < m; i++){
        qsort(a[i], m, sizeof(int), cmp);
    }
    printf("\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
getch();
}