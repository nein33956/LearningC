//co bao nhiu hang
//moi hang co bao nhieu cot,ki tu
//ki tu,so,chu no in ra la gi 
//thong thuong su dung for long nhau 
//i la hang, j la cot   
       
//input: 4 5   j  
//output:    *** i 
//           ~~~
//           ~~~
//           ***

#include<stdio.h>          
#include<conio.h>

void main()
{
    int a, b; scanf("%d%d",&a, &b);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
           if(i==1 || i==a || j==1 || j==b) printf("*");
           else printf("~");
        }
    printf("\n"); 
    }
getch();
}