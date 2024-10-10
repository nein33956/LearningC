//ham strtok
//dem cac tu trong xau 
/*input: PYTHON   JAVA C++   PHP  JS   output: 5*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char c[1005];
    gets(c);
    char *token = strtok(c, " ");
    int cnt = 0;
    while( token != NULL ){
        ++cnt;
        token = strtok(NULL, " ");
    }
    printf("%d", cnt);
getch();
}
