//viết chương trình C++ để tính giai thừa của một số nguyên dương bởi sử dụng hàm trong C++

#include<stdio.h>
#include<conio.h>

int giaithua(int n){
    int sum = 1;
    for (int i = 1; i <= n; i++){
        sum = sum * i;
    }
    return sum;
}

void main(){
    int x;
    scanf("%d", &x);
    int kq = giaithua(x);
    printf("%d! = %d", x, kq);
getch();
}