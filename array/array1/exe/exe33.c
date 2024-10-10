//tim so co so lan xuat hien nhieu nhat trong mang
//trong truong hop co nhieu so co cung so lan xuat hien thi lay so nho hon
/*input: 10                     output:
        1 2 3 3 3 3 9 9 9 9            */
#include<stdio.h>
#include<conio.h>
int cnt[10001] = {0};
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;//dem so lan xuat hien cua tung phan tu
    }
    int dem = 0, res;//res de luu phan tu xuat hien nhieu nhat, dem de luu so lan xuat hien
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] > dem){
            dem = cnt[a[i]];
            res = a[i];
        }else if(cnt[a[i]] == dem){
            if(res > a[i])
                res = a[i];
        }
    }
    printf("%d %d", res, dem);
getch();
}
