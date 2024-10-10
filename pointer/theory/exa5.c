//con tro va mang
//địa chỉ của biến mảng = địa chỉ của phần tử đầu tiên của mảng = giá trị của biến mảng 
#include<stdio.h>
#include<conio.h>
void main(){
    int a[5] = {1, 2, 3, 4, 5};
    printf("Gia tri cua bien a: %d\n", a);//a la hang con tro
    printf("Gia tri cua mang a: %d\n", &a[0]);
    for(int i = 0; i < 5; i++){
        printf("Dia chi cua pt a[%d]: %d\n", i, &a[i]);
    }
getch();
}