//sap xep cac ki tu trong xau theo thu tu tu dien
/* input: 2         output:
        aazabcd            aaabcdz
        dumu               dmuu*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    if(*x < *y)
        return -1;
    else return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char c[1000];
        gets(c);
        qsort(c, strlen(c), sizeof(char), cmp);
        printf("%s\n", c);
    }
getch();
}