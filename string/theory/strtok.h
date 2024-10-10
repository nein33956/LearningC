//ham strtok
//tach cac tu trong xau 
/*input: PYTHON   JAVA C++   PHP  JS   output:
                                            PYTHON
                                            JAVA
                                            C++
                                            PHP
                                            JS*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char c[1005];
    gets(c);
    char *token = strtok(c, " ");
    while( token != NULL ){
        printf( "%s\n", token ); //In mỗi token ra
        token = strtok(NULL, " ");
    }
getch();
}
