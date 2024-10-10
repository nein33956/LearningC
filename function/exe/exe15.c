//dung ham tim max min 3 so
#include<stdio.h>
#include<conio.h>
#include<math.h>
//ham max
  int max(int a, int b, int c){
     int max = a;
     if(b > max) max = b;
     if(c > max) max = c;
     return max;
    }
//ham min
  int min(int a, int b, int c){
	   int min = a;
	   if (b < min) min = b;
     if (c < min) min = c;
     return min;
    }
void main(){
    int x,y,z;                       
	printf("Nhap 3 so x, y, z : ");
	scanf("%d %d %d",&x, &y, &z);
	printf("max = %d\n",max(x, y, z));
	printf("min = %d\n",min(x, y, z));
getch();
}
