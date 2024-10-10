//Viết chương trình C++ để in ra màn hình số kế tiếp của số nguyên bạn vừa nhập.
#include<stdio.h>
#include<conio.h>
//ham in ra so ke tiep
int soketiep(int x){
    ++x;
    return x;
}

void main(){
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d",&n);
    printf("So ke tiep so vua nhap la: %d", soketiep(n));
getch();
}