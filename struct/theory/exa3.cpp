//mang trong struct

#include<stdio.h>
#include<conio.h>

struct hocsinh{
    char ten[100];
    double diem;
};

typedef struct hocsinh HS;

void nhap(HS *x){
    getchar();
    gets(x -> ten);
    scanf("%lf", &x -> diem);
}

void xuat(HS a){
    printf("%s %.2lf\n", a.ten, a.diem);
}

int main(){
    HS a[1000];
    //nhap so luong hoc sinh
    int n;
    scanf("%d", &n);
    //nhap hoc sinh va du lieu
    for(int i = 0; i < n; i++) nhap(&a[i]);
    //xuat ra hoc sinh va du lieu 
    for(int i = 0; i < n; i++) xuat(a[i]);
getch();
return 0;
}
