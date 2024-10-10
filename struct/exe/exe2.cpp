//sap xep sinh vien co diem gpa giam dan hoac tang dan
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

//sap xep chon
void sapxep(SV a[], int n){
    for(int i = 0; i < n; i++){
        int max_idx = i;
        for(int j = i + 1; j < n; j++){
            if(a[j].diemgpa > a[max_idx].diemgpa){
                max_idx = j;
            }
        }
        SV tmp = a[i];
        a[i] = a[max_idx];
        a[max_idx] = tmp;
    }
}

int cmp(const void *a, const void *b){
    SV *x = (SV*)a;
    SV *y = (SV*)b;
    if(x->diemgpa < y->diemgpa) return 1;
    else return -1;
}

int main(){
    SV a[1000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) nhap(&a[i]);
    //for(int i = 0; i < n; i++) xuat(a[i]);
    sapxep(a, n);
    for(int i = 0; i < n; i++) xuat(a[i]);
    //qsort(a, n, sizeof(SV), cmp);
getch();
}