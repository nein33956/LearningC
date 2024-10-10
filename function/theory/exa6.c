// kiem tra 1 so co phai so chinh phuong hay khong
// - la so nguyen duong
// - can bac hai cua no cung la so nguyen
#include<stdio.h>
#include<conio.h>
#include<math.h>

int so_chinh_phuong(int n){
    int can = sqrt(n);
    if(can * can == n){
        printf("Yes");
    }else printf("No");
}
 void main(){
    int n;
    scanf("%d", &n);
    so_chinh_phuong(n);
getch();
}