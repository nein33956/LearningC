//Viết chương trình C++ để nhập tuổi và in ra kết quả nếu tuổi học sinh đó không đủ điều kiện vào học lớp 10. Biết tuổi vào lớp 10 của học sinh là 16.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    int n;
    printf("Nhap so tuoi:");
    scanf("%d", &n);
    if(n == 16){
        printf("Du dieu kien.");
    }else if(n < 16){
        printf("Khong du dieu kien.");
    }else if( n > 16 ){
        printf("Nhap lai.");
    }
getch();
}