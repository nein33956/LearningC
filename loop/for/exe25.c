//co bao nhiu hang
//moi hang co bao nhieu cot,ki tu
//ki tu,so,chu no in ra la gi 
//thong thuong su dung for long nhau 
//i la hang, j la cot  

//input: 5
//output: 12345
//        23456
//        34567
//        45678
//        56789

#include<stdio.h>
#include<conio.h>

void main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d ", i+j-1);
        }
    printf("\n");  
    }
getch();
}