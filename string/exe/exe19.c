//chuan hoa ten
//thuc hien viet hoa chu cai dau tien cua ten nguoi
/*input: 2                       output:
        ngUyEn  VaN    LAm              Nguyen Van Lam
        VO lE      tHAnh                Vo Le Thanh*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//chuan hoa ki tu dau tien cua tu viet hoa va cac tu sau viet thuong
void chuanhoa(char c[]){
    c[0] = toupper(c[0]);
    for(int i = 1; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char c[1000], a[20][50];
        int n = 0; 
        gets(c);
        char *token = strtok(c, " ");
        while(token != NULL){
            strcpy(a[n], token);
            ++n;
            token = strtok(NULL, " ");
        }
        for(int i = 0; i < n; i++){
            chuanhoa(a[i]);
            printf("%s ", a[i]);
        }
        printf("\n");
    }
getch();
}