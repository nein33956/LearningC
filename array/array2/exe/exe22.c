//sap xep cac phan tu theo cot
/*input: 3 3         output
        1 4 1             1 3 1
        2 9 8             2 4 1
        3 3 1             3 9 8*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cmp(const void *a, const void *b) {
    int *x = (int*)a;
    int *y = (int*)b;
    if (*x < *y) return -1;
    else return 1;
}

int main() {
    int a[100][100], m, n;
    printf("Nhap so hang va so cot: ");
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
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
    for (int j = 0; j < n; j++) {
        int column[100];
        for (int i = 0; i < m; i++) {
            column[i] = a[i][j];
        }
        qsort(column, m, sizeof(int), cmp);
        for (int i = 0; i < m; i++) {
            a[i][j] = column[i];
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
getch();
}
