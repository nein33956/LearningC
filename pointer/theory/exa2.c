// vi du ve truyen tham chieu va truyen tham tri
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void tang1(int n){
    n += 100;
}
void tang2(int *a){
    *a += 100;
}
void main(){
    int a = 300;
    tang1(a);
    printf("Gia tri cua bien a sau khi ham tang 1 ket thuc: %d", a);
/*giai thich: gia su bien a co gia tri la 300 va dia chi la 10000,khi ham tang2(&a) se lay dia chi 10000
sau do se tro vao vung nho co dia chi 10000 de tim gia tri a sau do cong them 100*/
    tang2(&a);
    printf("\nGia tri cua bien a sau khi ham tang 2 ket thuc: %d", a);
getch();
}