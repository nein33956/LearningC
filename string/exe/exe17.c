//sap xep cac tu trong xau theo chieu dai
//tu nao co thu tu tu dien nho hon thi xep truoc
/*input: 2                    output:
         aa abc aaa a bc z          a z aa abc bc aaa
         nguyen    van long         van long nguyen*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    if(strlen(x) != strlen(y)){
        if(strlen(x) < strlen(y))
            return -1;
        else return 1;
    }else if(strcmp(x, y) < 0) return -1;
    else return 1;

}

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char c[1001], a[20][50];
        gets(c);
        int n = 0;
        char *token = strtok(c, " ");
        while(token != NULL){
            strcpy(a[n], token);
            ++n;
            token = strtok(NULL, " ");
        }
        qsort(a, n, sizeof(a[0]), cmp);
        for(int i = 0; i < n; i++){
            printf("%s ", a[i]);
        }
        printf("\n");
    }
getch();
}