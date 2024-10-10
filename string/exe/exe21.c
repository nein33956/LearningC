//tao email tu ten nguoi dung
/*input: 2                   output: 
        nGuyeN VAn Manh             manhnv@gmail.com
        VO   le ThANh               thanhvl@gmail.com*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char c[1000], a[20][50];
        int n = 0; 
        gets(c);
        strlwr(c);
        char *token = strtok(c, " ");
        while(token != NULL){
            strcpy(a[n], token);
            ++n;
            token = strtok(NULL, " ");
        }
        printf("%s", a[n-1]);
        for(int i = 0; i < n - 1; i++){
            printf("%c", a[i][0]);
        }
        printf("@gmail.com\n");
    }
getch();
}