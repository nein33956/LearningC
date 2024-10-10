// tim phan tu lon nhat trong mang 2 chieu
#include<stdio.h>
#include<conio.h>
void main(){
    int m, n;
    printf("Nhap so hang va so cot cua mang: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int max = a[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > max) max = a[i][j];
        }
    }
    printf("Gia tri lon nhat trong mang la: %d", max);
getch();
}
