//dem so lan xuat hien cua ki tu trong xau
//cho xau @@AbAHHOUbubuubsll1245
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char c[1005];
    gets(c);
    //khoi tao mang dem cnt co 256 ki tu la tat ca cac ki tu trong bang ma ascII
    //dung de dem so lan xuat hien ki tu bat ki trong mang
    int cnt[256] = {0};
    //duyet vong lap tu chi so dau tien den chi so cuoi cung cua xau
    //cu moi lan lap lai tang so lan xuat hien cua ki tu do len
    for(int i = 0; i < strlen(c); i++){
        cnt[c[i]]++;
    }
    //duyet vong lap tat ca cac ki tu va in ra ki tu cung voi so lan xuat hien cua no
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            printf("%c %d\n", i, cnt[i]);
        }
    }
getch();
}