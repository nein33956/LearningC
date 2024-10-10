#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
//ham kt chan le
bool check(int n){
    if(n % 2 == 0)
        return 1;
    else return 0;  
}
//ham dem chan le
void demChanLe(int n, int a[]){
    int demChan = 0, demLe = 0;
    for(int i = 0;i < n; i++){
        if(check(a[i]) == 1 )
            demChan++;
        else demLe++;
    } 
    printf("So luong so chan la: %d", demChan);
    printf("\nSo luong so le la: %d", demLe);
}
 
int main(){
    int n; //Khai bao n
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n); //Nhập n là số lượng phần tử từ bàn phím
    int a[n]; //Khai báo mảng a gồm n phần từ
//Duyệt vòng lặp để nhập n phần tử
    for(int i=0;i<n;i++){
        printf("pt thu %d :", i);
        scanf("%d", &a[i]);
    }
     
//Gọi hàm đếm chẵn lẻ
    demChanLe(n,a);
getch();    
}