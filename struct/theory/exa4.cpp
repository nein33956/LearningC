//mang struct
#include<stdio.h>
#include<string.h>
#include<conio.h>

struct hocsinh{
    char ten[50];
    char ma[20];
    char lop[20];
    double diemgpa;
};

int main(){
    struct hocsinh hs1;
    gets(hs1.ten);
    gets(hs1.ma);
    gets(hs1.lop);
    scanf("%lf", &hs1.diemgpa);
    getchar();
    printf("%s %s %s %.2lf", hs1.ten, hs1.ma, hs1.lop, hs1.diemgpa);
getch();
return 0;
}