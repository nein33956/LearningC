//nhap vao n sinh vien, tim kiem sinh vien theo ma sinh vien
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

struct sinhvien{
    char ma[50];
    char ten[100];
    float diemgpa;
};

typedef struct sinhvien SV;

void nhap(SV *a){
    scanf("%s", a->ma);
    getchar();
    gets(a->ten);
    scanf("%f", &a->diemgpa);
}

void xuat(SV a){
    printf("%s %s %.2f\n", a.ma, a.ten, a.diemgpa);

}

void timkiem1(SV a[], int n, char m[100]){
    for(int i = 0; i < n; i++){
        if(strcmp(m, a[i].ma) == 0){
            xuat(a[i]);
            return;
        }
    }
    printf("Khong tim thay!\n");
}
//tim kiem sinh vien co diem cao nhat
void timkiem2(SV a[], int n){
//khoi tao bien res de luu sin vien co diem cao nhat
//khoi tao bien pos de luu vi tri sinh vien co diem cao nhat
    float res = 0;
    int pos;
    for(int i = 0; i < n; i++){
        if(a[i].diemgpa > res){
            res = a[i].diemgpa;
            pos = i;
        }
    }
    xuat(a[pos]);
}

int main(){
    SV a[1000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) nhap(&a[i]);
    for(int i = 0; i < n; i++) xuat(a[i]);
    char s[100];
    printf("\nNhap ma sinh vien can tim kiem: ");
    scanf("%s", &s);
    timkiem1(a, n, s);
    printf("\nSinh vien co diem cao nhat la: ");
    timkiem2(a, n);
    getch();
}