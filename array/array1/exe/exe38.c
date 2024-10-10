//bai toan doi tien- thuat toan tham lam
/*tien tai ngan hang co cac menh gia la 1 2 5 10 20 50 100 200 500 1000
so luong so to tien moi menh gia la khong han che, mot nguoi can doi
mot so tien la n, xac dinh so to tien it nhat khi doi la bao nhieu*/
/*input: 2        output:
        70               2
        121              3*/
#include<stdio.h>
#include<conio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n;
        scanf("%d", &n);
        int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int cnt = 0;//dem so luong to tien
        for(int i = 0; i < 10; i++){
            cnt += n/a[i];
            n %= a[i];
        }
        printf("%d\n", cnt);
    }
getch();
}