// max min 3 so
#include<stdio.h>
#include<conio.h>
#include<math.h>
int max(int a, int b, int c){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int min(int a, int b, int c){
	int min = a;
	if(b < min) min = b;
  if(c < min) min = c;
  return min;
}
void main(){
  int a,b,c;                       
	printf("nhap 3 so a,b,c\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("max = %d\n", max(a, b, c));
	printf("min = %d\n",min(a, b, c));
	getch();
}
//bai nay dung ham
