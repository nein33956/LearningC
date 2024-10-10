//day uu the, cach nhap mang khi k biet truoc so luong phan tu
#include<stdio.h>
#include<conio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n = 0;//dem so luong phan tu trong manh
        int chan = 0, le = 0;
        char kitu = ' ';
        while(kitu == ' '){
            int x; 
            scanf("%d", &x);
            ++n;
            if(x % 2 == 0) ++chan;
            else ++le;
            kitu = getchar();
        }
        if((n % 2 == 0 && chan > le) || (n % 2 != 0 && le > chan)) printf("YES");
        else printf("NO");
    }
getch();
}