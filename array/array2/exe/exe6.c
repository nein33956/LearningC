//viet chuong trinh tinh tong-hieu hai ma tran co cung kich thuoc
#include<stdio.h>
#include<conio.h>

void main(){
    int m, n, a[100][100], b[100][100], c[100][100];
    printf("Nhap so hang va so cot cua 2 ma tran: ");
    scanf("%d%d", &m, &n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("b[%d][%d]: ", i, j);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }    
    
    printf("\nMa tran tong: \n");
    for(int i = 0; i < m; i++){    
        for(int j = 0; j < n; j++){
            printf("%5d ",c[i][j]);
        }
        printf("\n");
    }
getch();
}
