//liet ke cac ki tu xuat hien o ca hai xau
/*input: Python java PHP   output: Ptoj
         Project                      */
/*idea: khoi tao mot mang dem duyet qua cac ki tu trong xau 1 va danh dau so lan xuat hien la 1
        sau do duyet qua xau thu 2, kiem tra ki tu trong xau 2, ki tu nao co so lan xuat hien 
        la 1 thi tang len 2 va in ra*/
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
    //duyet qua ki tu trong xau b, so lan xuat hien cua ki tu nao trong xau b la 1 thi chuyen thanh 2
    for(int i = 0; i < strlen(b); i++){
        if(cnt[b[i]])
            cnt[b[i]] = 2;
    }
    printf("\n");
    //duyet qua tat ca cac ki tu va xem la ki tu nao co so lan xuat hien la 2 thi in ra
    for(int i = 0; i < 256; i++){
        if(cnt[i] == 2){
            printf("%c", i);
        }
    }
getch();
}