//dem so lan xuat hien cua mot ki tu co trong xau
/* input: abaacbccb  output: a 3
                             b 3
                             c 3*/
//tu a toi z co 26 chu cai
//tu a toi z co ma asci2 tu 97 toi 122
/* a : 97 -> 0
   b : 98 -> 1
   c : 99 -> 2
   d : 100 -> 3
   ...
   z : 122 -> 25*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char a[1005];
    fgets(a, 1005, stdin);
    //khoi tao mang cnt co 26 ki tu va gan gia tri dem cho cac ki tu do la 0
    //dung de dem so lan xuat hien cua moi ki tu
    int cnt[26] = {0};
    //duyet vong lap tu ki tu dau tien toi ki tu cuoi cung trong xau
    //a[0] = a = 97
    for(int i = 0; i < strlen(a); i++){
        cnt[a[i] - 97]++;
    }
    //duyet vong lap tu 0 den 25 la thu tu cua cac ki tu trong bang ma ascII
    //in ra ki tu va so lan xuat hien
    for(int i = 0; i < 25; i++){
        if(cnt[i] != 0)
            printf("%c %d\n", i + 97, cnt[i]);
    }
getch();
}
