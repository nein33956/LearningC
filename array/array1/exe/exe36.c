//algorithm sliding window-thuat toan cua so truot
//lay tong cua 3 pt dau tru gia tri pt dau cong gia tri pt thu 4
//vidu: tong 1 + 2 + 4 = 7 tinh tong 2 + 2 + 4 = 7 - 1 + 4 = 10
/*intput: 10 3                          output:16
          1 2 4 4 8 1 3 3 9 4                    3 9 4*/
/*#include<stdio.h>
#include<conio.h>

int main(){
    int n, k;//k de luu do dai cua day con can tim
    printf("Nhap so phan tu cua mang: ");
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    long long res = 0;//res de luu tong lon nhat
    int idx;//luu vi tri cua phan tu bat dau cua day con co tong lon nhat
    for(int i = 0; i <= n-k; i++){
        long long sum = 0;//luu tong cua day con
        for(int j = 0; j < k; j++){
            sum += a[i+j];
        }
        if(sum >= res){
            res = sum;
            idx = i;
        }
    }
    printf("%lld\n", res);
    for(int i = 0; i < k; i++){
        printf("%d ", a[i+idx]);
    }
getch();
}*/
#include<stdio.h>
#include<conio.h>

int main(){
    int n, k;//k de luu do dai cua day con can tim
    printf("Nhap so phan tu cua mang: ");
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    //khai bao res de luu tong lon nhat
    //khai bao idx va gan vi tri cua phan tu bat dau cua day con co tong lon nhat la phan tu a[0] - pt dau tien
    //khai bao bien sum de luu tong cua day con 
    long long res = 0, idx = 0, sum = 0;
    //duyet vong lap tu phan tu dau tien den phan tu thu 3
    //cong 3 phan tu do vao bien sum
    //gan tong res bang sum
    for(int i = 0; i < k; i++){
        sum += a[i];
        res = sum;
    }
    //duyet vong lap tu 1(vi da khai bao vi tri cua pt dau tien day con lon nhat la pt dau tien)
    //den n-k de dam bao cac vi tri bat dau hop le
    //bien sum o tren bang 7 va thuc hien lay 7 tru pt dau tien cong pt thu 4
    for(int i = 1; i <= n-k; i++){
        sum = sum - a[i-1] + a[i+k-1];
        if(sum >= res){
            res = sum;
            idx = i;
        }
    }
    printf("%lld\n", res);
    for(int i = 0; i < k; i++){
        printf("%d ", a[i+idx]);
    }
getch();
}
