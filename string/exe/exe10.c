//xuat hien o xau 1 hoac xau 2
/* input: Abcdu   output: Aabcduz
          abcdz                    */
/*idea: duyet qua xau a, danh dau ki tu do co so lan xuat hien la 1
        duyet qua xau b, danh dau ki tu do co so lan xuat hien la 1
        sau do duyet qua ca hai xau thay ki tu nao co so lan xuat hien la 1 thi in ra*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

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
    //duyet qua ki tu trong xau b, so lan xuat hien cua ki tu nao trong xau b la 1 thi chuyen thanh 1
    for(int i = 0; i < strlen(b); i++){
        cnt[b[i]] = 1;
    }
    //duyet qua tat ca cac ki tu va xem la ki tu nao co so lan xuat hien la 1 thi in ra
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0)
            printf("%c", i);   
    }
getch();
}