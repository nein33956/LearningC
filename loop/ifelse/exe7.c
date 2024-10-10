// viết chương trình C++ để nhập một số nguyên bất kỳ từ bàn phím 
//và in kết quả ra màn hình để thông báo cho người dùng biết số đó lớn hay nhỏ hơn 10
#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    scanf("%d", &n);
    if(n == 100){
        printf("Bang");
    }else if(n < 100){
        printf("Be");
    }else if(n > 100){
        printf("Lon");
    }
getch();
}