//co bao nhiu hang
//moi hang co bao nhieu cot,ki tu
//ki tu,so,chu no in ra la gi 
//thong thuong su dung for long nhau 
//i la hang, j la cot  
//input: 5   
//output:    * i=1: co 1 dau sao
//           ** i=2: co 2 dau sao
//           *** i=3: co 3 dau sao
//           **** i=4: co 4 dau sao
//           ***** i=5:co 5 dau sao

#include<stdio.h>
#include<conio.h>
void main(){
    int n; scanf("%d", &n);
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            printf("*");
        }

        printf("\n");
    }
getch();
}