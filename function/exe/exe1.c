// kiem tra 1 so xem co phai la so nguyen to khong
// - so tu nhien lon hon 1
// - no chi chia het cho 1 va chinh no

#include<stdio.h>
#include<math.h>
#include<conio.h>

//ham ktsonguyento
int kt_songuyento(int n){
        for(int i = 2; i <= sqrt(n); i++){ 
            if(n % i == 0)
                return 0;  
        }
    return n > 1;
}
//program
void main(){
    int x; 
    printf("Nhap x: ");
    scanf("%d", &x);
    if (kt_songuyento(x)) printf("YES"); //in ra
    else printf("NO");
getch();
}