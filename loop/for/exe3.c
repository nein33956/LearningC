/*viet chuong trinh tim cac so co tich bang tong*/
#include<stdio.h>
#include<conio.h>

void main(){
	int a, b, c;
	for (a = 1; a <= 9; a++)
	for (b = 0; b <= 9; b++)
	for (c = 0; c <= 9; c++) 
	if(a*b*c == a+b+c)
		printf("%d%d%d ", a,b,c);
	getch();
}