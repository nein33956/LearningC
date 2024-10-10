//dem so nguyen to tren duong cheo chinh va duong cheo phu
#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}
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
    //khoi tao bien dem bang 0 va duyet tung hang
    int cnt = 0;
    for(int i = 0; i < m; i++){
        if(prime(a[i][i])) ++cnt;
        if(prime(a[i][n-i-1])) ++cnt;
    }
    if(prime(a[n/2][n/2])) --cnt;//dem phan tu 1 lan
    printf("\n%d", cnt);
getch();
}