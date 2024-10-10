//ki tu co so lan xuat hien nhieu nhat
/* input: babacbacbbb  ouput: b*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    char c[5001];
    gets(c);
    int cnt[256] = {0};
    for(int i = 0; i < strlen(c); i++){
        cnt[c[i]]++;
    }
    //khoi tao bien max de luu tan suat xuat hien lon nhat
    //khoi tao bien ktu de luu ki tu xuat hien nhieu nhat
    int max = 0;
    char ktu;
    for(int i = 0; i < 256; i++){
        if(cnt[i] >= max){
            max = cnt[i];
            ktu = (char)(i);
        }
    }
    printf("%c", ktu);
getch();
}