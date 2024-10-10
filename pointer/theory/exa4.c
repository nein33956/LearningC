//hoan doi hai gia tri
#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b){
    int tam = *a;//lu gia tri cua bien ma con tro a dang tro toi
    *a = *b;//gan gia tri cua bien ma con tro b dang tro toi cho gia tri cua bien ma con tro a tro toi
    *b = tam;// gan gia tri cua bien ma con tro b tro toi
}
void main(){
    int x = 100, y = 200;
    swap(&x, &y);
    printf("%d %d", x, y);
getch();
}