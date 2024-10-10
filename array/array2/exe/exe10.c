//tim cot co nhiu so nguyen to nhat
/*input: 3 3            output:
        1 2  4              2
        3 5  6              2 5 11
        6 11 8*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
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
            printf("%2d ", a[i][j]);
        }
    printf("\n");
    }
    //dung bien res de luu so luong so nguyen to cua moi cot
    //bien idx de luu chi so cot co nhieu so nguyen to nhat
    int res = 0, idx;
    for(int j = 0; j < n; j++){
        int cnt = 0;//dem xem cot thu j co bao nhieu so nguyen to
        for(int i = 0; i < m; i++){
            if(prime(a[i][j]))
                ++cnt;
        }
        if(cnt > res){
            res = cnt;
            idx = j;
        }
    }
    printf("%d\n", idx + 1);
    for(int i = 0; i < m; i++){
        if(prime(a[i][idx]))
            printf("%d ", a[i][idx]);
    }
getch();
}