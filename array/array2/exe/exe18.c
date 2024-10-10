//ma tran xoay oc
/*input: 3      output: 1 2 3
                        8 9 4
     c1       c2        7 6 5*/
/*h1 1  2  3  4 
     12 13 14 5
     11 16 15 6
  h2 10 9  8  7*/
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n], cnt = 1;//cnt = n*n
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while(h1 <= h2 && c1 <= c2){
        //xay dung dong tren cung
        for(int i = c1; i <= c2; i++){
            a[h1][i] = cnt;
            ++cnt;//--cnt
        }
        ++h1;
        //xay dung canh ben phai
        for(int i = h1; i <= h2; i++){
            a[i][c2] = cnt;
            ++cnt;//--cnt
        }
        --c2;
        //xay dung dong duoi cung
        if(c1 <= c2){
            for(int i = c2; i >= c1; i--){
                a[h2][i] = cnt;
                ++cnt;//--cnt
            }
        --h2;
        }
        //xay dung canh ben trai
        if(h1 <= h2){
            for(int i = h2; i >= h1; i--){
                a[i][c1] = cnt;
                ++cnt;//--cnt
            }
        ++c1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", a[i][j]);
        }
    printf("\n");
    }
getch();
}
