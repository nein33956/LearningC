/*xac dinh so xuat hien nhieu lan nhat trong day*/
/*input: 2                       output:
        10
        1 2 3 1 2 3 1 2 3 1            1
        10
        1 2 3 4 5 6 7 8 9 10           1 2 3 4 5 6 7 8 9 10*/
#include<stdio.h>
#include<conio.h>
int cnt[30001] = {0};//khoi tao bien dem so lan xuat hien cua cac phan tu bang 0
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }
        //duyet vong lap dem so lan xuat hien cua phan tu
        for(int i = 0; i < n; i++){
            cnt[a[i]]++;
        }
        //khoi tao bien res de luu so lan xuat hien nhieu nhat
        int res = 0;
        for(int i = 0; i < n; i++){
            if(res < cnt[a[i]])
                res = cnt[a[i]];
        }
        for(int i = 0; i < n; i++){
            if(res == cnt[a[i]])
                printf("%d ", a[i]);
            cnt[a[i]] = 0;
        }
    printf("\n");
    }
getch();
}