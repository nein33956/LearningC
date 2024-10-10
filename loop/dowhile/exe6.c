//viết chtr yêu cầu người dùng nhập vào một số bất kì và in số đó lên màn hình. Nếu người dùng nhập vào số 0 thì thoát chương trình, ngược lại thì nhập liên tục.

#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    scanf("%d", &n);
    do{
        if(n != 0) break;
        else if(n == 0){
            printf("Nhap lai.");
        }
    }while(n != 0);
getch();
}