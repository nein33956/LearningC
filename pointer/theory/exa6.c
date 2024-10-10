//con tro co chuc nang nhu mang
#include<stdio.h>
#include<conio.h>
void main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *b = a;
    for(int i = 0; i < 5; i++){
        printf("%d ", b[i]);
    }
getch();
}