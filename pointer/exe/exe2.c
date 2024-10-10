//Tráo đổi hai giá trị bởi sử dụng con trỏ trong C
#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b){
    int tam = *a;
    *a = *b;
    *b = tam;
}
void main(){
    int x = 10, y = 20;
    swap(&x, &y);
    printf("%d %d", x, y);
getch();
}