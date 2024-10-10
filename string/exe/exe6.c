//in ra so lan xuat hien theo thu tu trong xau
/* input: baaaabac  output: b 2
                            a 5
                            c 1*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char c[1005];
    gets(c);
    int cnt[26] = {0};
    for(int i = 0; i < strlen(c); i++){
        cnt[c[i] - 97]++;
    }
    for(int i = 0; i < strlen(c); i++){
        if(cnt[c[i] - 97] != 0){
            printf("%c %d\n", c[i], cnt[c[i] - 97]);
            cnt[c[i] - 97] = 0;
        }
    }
getch();
}