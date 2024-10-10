// dem so nguyen to co trong mang 2 chieu
#include<stdio.h>
#include<conio.h>
#include<math.h>
int snt(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if(a % i == 0) return 0;
    }
    return a > 1;
}
int DemSNT(int a[][100], int m, int n){
    int cnt = 0;
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++)
        if(snt(a[i][j]))
            cnt++;   
   }
}

void main(){
    int m, n;
    printf("Nhap so dong va so cot cua mang: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Mang co %d so nguyen to!", DemSNT(a, m, n));
getch();
}