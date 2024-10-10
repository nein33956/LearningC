//baitoan xep hang mua ve xem phim
#include<stdio.h>
#include<conio.h>
int check(int a[], int n){
    int c25 = 0, c50 = 0;//dem xem co bao nhieu to 25 va bao nhieu to 50
    for(int i = 0; i < n; i++){//duyet nguoi dau tien den nguoi cuoi cung
        //truong hop dau tien la nguoi mua hang dua to 25 va khong can tra lai
        if(a[i] == 25) ++c25;//tang so to c25 len 
        //truong hop thu hai nguoi mua hang dua to 50
        //+khong co to 25 nao de tra lai thi return 0;
        //+co to 25 de tra lai thi giam so luong ti 25 va tang so to 50
        else if(a[i] == 50){
            if(c25 == 0)
                return 0;
            --c25;
            ++c50;
        //truong hop dua to 100
        //+ khong co to 25 nao hoac tong so tien cua ban nho hon 75
        }else{
            if(c25 == 0 || (c25*25 + c50*50 < 75))
                return 0;
            if(c50 != 0){
                --c25;
                --c50;
            }else{
                c25 -= 3; 
            }
        }
    }
    return 1;
}

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
        printf("%d ", a[i]);
    }
    printf("\n");
    if(check(a, n)) printf("Yes");
    else printf("No");
getch();
}