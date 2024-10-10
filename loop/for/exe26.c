//co bao nhiu hang
//moi hang co bao nhieu cot,ki tu
//ki tu,so,chu no in ra la gi 
//thong thuong su dung for long nhau 
//i la hang, j la cot  

//input: 5
//output: 1  2  3  4  5
//        6  7  8  9  10
//        11 12 13 14 15
//        16 17 18 19 20
//        21 22 23 24 25

#include<stdio.h>
#include<conio.h>

void main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%2d ", n*(i-1)+j);
        }
    printf("\n");  
    }
getch();
}