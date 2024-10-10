//ham struct

#include<stdio.h>
#include<string.h>
#include<conio.h>

struct hocsinh{
    char ten[50];
    double diemgpa;
};

typedef hocsinh HS;

HS nhap(){
    HS x;
    gets(x.ten);
    scanf("%lf", &x.diemgpa);
    return x;
}

void xuat(HS a){
    printf("%s %.2lf", a.ten, a.diemgpa);
}

int main(){
    HS a = nhap();
    xuat(a);
getch();
return 0;
}