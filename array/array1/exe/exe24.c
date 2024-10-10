///bai toan lineland
#include<stdio.h>
#include<conio.h>

int min(int a, int b){
    return a<b ? a:b;
}

int max(int a, int b){
    return a>b ? a:b;
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
    //duyet tung thanh pho
    for(int i = 0; i < n; i++){
        //truong hop i la thanh pho dau tien va khong co thanh pho dung truoc no
        //thi khoang cach nho nhat mini la tu no den phan tu dung sau no
        //khoang cach lon nhat maxi la tu no den phan tu cuoi cung
        if(i == 0) printf("%d %d\n", a[1] - a[0], a[n-1] - a[0]);
        //truong hop i la thanh pho cuoi cung va khong co thanh pho dung sau no
        //thi khoang cach nho nhat mini la tu no den phan tu dung truoc no
        //khoang cach lon nhat maxi la tu no den phan tu dau tien
        else if(i == n-1) printf("%d %d\n", a[n-1] - a[n-2], a[n-1] - a[0]);
        //truong hop cuoi cung i khong phai la dau tien va cung k phai cuoi cung
        //thi khoang cach nho nhat mini la tu no den phan tu dung truoc va phan tu dung sau
        //khoang cach lon nhat mmaxi la tu thanh pho hien tai den thanh pho dau tien va phan tu cuoi cung
        else printf("%d %d\n", min(a[i]-a[i-1], a[i+1]-a[i]), max(a[i]-a[0], a[n-1]-a[i]));
    }
getch();
}