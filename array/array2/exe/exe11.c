//loai bo hang va cot co tong lon nhat
/*input: 1            output:
        3 3                
        1 2 3             1 2
        4 5 6             4 5
        7 8 9                 */   
#include<stdio.h>
#include<conio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
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
        //khoi tao res de luu cac hang co tong phan tu lon nhat
        //khoi tao hang, cot de luu hang cot co tong phan tu lon nhat
        int res = 0, hang, cot;
        //tim hang co tong phan tu lon nhat
        for(int i = 0; i < m; i++){
            int sum = 0;
            for(int j = 0; j < n; j++){
                sum += a[i][j];
            }
            if(sum > res){
                res = sum;
                hang = i;
            }
        }
        //tim cot co phan tu lon nhat
        res = 0;
        for(int j = 0; j < n; j++){
            int sum = 0;
            for(int i = 0; i < m; i++){
                sum += a[i][j];
            }
            if(sum > res){
                res = sum;
                cot = j;
            }
        }
        printf("#Test %d:\n", i);
        for(int i = 0; i < m; i++){
            if(i != hang){
                for(int j = 0; j < n; j++){
                    if(j != cot){
                        printf("%d ", a[i][j]);
                    }
                }
            printf("\n");
            }
        }
    }   
getch();
}