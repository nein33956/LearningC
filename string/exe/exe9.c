//cac ki tu xuat hien trong xau thu nhat ma khong xuat hien trong xau thu 2
/* input: Abcabcabc   output: Ab
          ac                    */
/*idea: duyet qua xau a, danh dau ki tu do co so lan xuat hien la 1
        duyet qua xau b, thay ki tu nao co so lan xuat hien la 1 thi danh dau la 0
        sau do duyet qua ca hai xau thay ki tu nao co so lan xuat hien la 1 thi in ra*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char a[101], b[101];
    gets(a);
    gets(b);
    //khoi tao mang dem tat ca cac phan tu co gia tri bang 0
    int cnt[256] = {0};
    //danh dau tat ca cac phan tu o xau a la 1
    for(int i = 0; i < strlen(a); i++){
        cnt[a[i]] = 1;
    }
    //duyet qua ki tu trong xau b, so lan xuat hien cua ki tu nao trong xau b la 1 thi chuyen thanh 0
    for(int i = 0; i < strlen(b); i++){
        if(cnt[b[i]])
            cnt[b[i]] = 0;
    }
    //duyet qua tat ca cac ki tu va xem la ki tu nao co so lan xuat hien la 1 thi in ra
    for(int i = 0; i < 256; i++){
        if(cnt[i] == 1){
            printf("%c", i);
        }
    }
getch();
}