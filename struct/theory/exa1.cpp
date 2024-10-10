#include<stdio.h>
#include<string.h>
#include<conio.h>

struct sinhvien{
    char ten[50];
    char ma[20];
    char lop[20];
    double diemgpa;
};
//thay the moi lan goi struct sinvien = SV
//typedef struct sinhvien SV;
int main(){
    struct sinhvien a;
    gets(a.ten);
    gets(a.ma);
    gets(a.lop);
    scanf("%lf", &a.diemgpa);
    printf("%s %s  %s %.2lf\n", a.ten, a.ma, a.lop, a.diemgpa);
    //gan thong tin 2 sinh vien cho nhau
    //struct sinhvien b = a;
    //printf("%s %s  %s %.2lf", b.ten, b.ma, b.lop, b.diemgpa);
getch();
return 0;
}