/*tinh tong binh phuong cac so le tư 1 toi n*/
#include <stdio.h>
#include <conio.h>
void main(){
    int tong = 0, n; 
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        if(i % 2 != 0){
            tong += i * i; 
        }
    }
    printf("Tong binh phuong cac so le la: %d", tong);    
getch();
}