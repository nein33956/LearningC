//cau truc long nhau, truy cap tu tu tung cai
#include<stdio.h>
#include<conio.h>

struct date{
    int ngay, thang, nam;
};

struct hour{
    int gio, phut, giay;
};

struct vexemphim{
    date ngayxem;
    hour gioxem;
    char tenphim[100];
    double giave;
};

int main(){
    struct vexemphim v;
    gets(v.tenphim);
    scanf("%lf %d %d %d %d %d %d", &v.giave, &v.ngayxem.ngay, &v.ngayxem.thang, &v.ngayxem.nam, &v.gioxem.gio, &v.gioxem.phut, &v.gioxem.giay);
    printf("Ten phim: %s     Gia ve: %.3lf\n", v.tenphim, v.giave);
    printf("Ngay: %d/%d/%d/     Gio: %d:%d:%d", v.ngayxem.ngay, v.ngayxem.thang, v.ngayxem.nam, v.gioxem.gio, v.gioxem.phut, v.gioxem.giay );
getch();
}


