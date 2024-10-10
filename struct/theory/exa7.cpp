//ham trong struct va vi du co ban
#include<stdio.h>
#include<string>
#include<conio.h>

struct date{   //khai bao date co kieu du lieu la struct
    int ngay;
    int thang; //khai bao cac doi tuong
    int nam;
};
//ham nhap
void nhap(struct date &d){ //co dau & boi vi day la nhung gia tri co the thay doi duoc
    printf("Nhap vao ngay, thang, nam theo thu tu:");
    scanf("%d %d %d", &d.ngay, &d.thang, &d.nam); //truy xuat thuoc tinh
}
//ham xuat
void xuat(struct date d){
    printf("%d/%d/%d", d.ngay, d.thang, d.nam);
}
//ham check
int check(struct date d){
    if((d.ngay > 30) || (d.thang > 12 && d.thang < 0) || (d.nam < 0))
    return 0;

    if(d.thang == 2){
        if(d.ngay != 28)
        return 0;
    }
    return 1;
}
int main(){
    struct date a; // khai bao bien a co kieu du lieu la date
    nhap(a);      //goi ham nhap va truyen a vao d
    printf("\n---------\n");
    xuat(a);
    printf("\nKiem tra: ");
    if(check(a) == 1){
        printf("Hop le!");
    }else printf("Khong hop le!");
getch();
return 0;
}