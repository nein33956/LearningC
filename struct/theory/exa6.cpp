//ham trong struct va vi du co ban
#include<stdio.h>
#include<string>
#include<conio.h>

struct date{   //khai bao date co kieu du lieu la struct
    int ngay;
    int thang; //khai bao cac doi tuong
    int nam;
};
//typedef struct date dta;
//ham nhap
void nhap(struct date &d){ //co dau & boi vi day la nhung gia tri co the thay doi duoc
    printf("Nhap vao ngay, thang, nam theo thu tu:");
    scanf("%d %d %d", &d.ngay, &d.thang, &d.nam); //truy xuat thuoc tinh
}

//ham xuat
void xuat(struct date d){
    printf("%d/%d/%d", d.ngay, d.thang, d.nam);
}
int main(){
    struct date a; // khai bao bien a co kieu du lieu la date
    nhap(a);      //goi ham nhap va truyen a vao d
    printf("\n---------\n");
    xuat(a);
getch();
return 0;
}

