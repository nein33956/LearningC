//tim hang co nhiue so nguyen to nhat, va liet ke cac so nguyen to do
/*input: 3 3            output:
        23 11 22              1
        14 5  9               23 11
        2  44 90*/
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
    //dung bien res de luu so luong so nguyen to cua moi hang
    //bien idx de luu chi so hang co nhieu so nguyen to nhat
    int res = 0, idx;
    for(int i = 0; i < m; i++){
        int cnt = 0;//dem xem hang thu i co bao nhieu so nguyen to
        for(int j = 0; j < n; j++){
            if(prime(a[i][j]))
                ++cnt;
        }
        if(cnt > res){
            res = cnt;
            idx = i;
        }
    }
    printf("%d\n", idx + 1);
    for(int j = 0; j < n; j++){
        if(prime(a[idx][j]))
            printf("%d ", a[idx][j]);
    }
getch();
}