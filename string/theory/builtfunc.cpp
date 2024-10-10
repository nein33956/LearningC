#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//kiem tra xem mot ki tu co phai in thuong hay khong
int is_slower(char c){
    if(c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

//kiem tra xem mot ki tu co phai in hoa hay khong
int is_upper(char c){
    if(c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

//kiem tra xem mot ki tu co phai chu cai hay khong
int is_alpha(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

//kime tra xem ki tu co phai chu so hay khong
int is_digit(char c){
    if(c >= '0' && c <= '9')
        return 1;
    return 0;
}

//tra ve dang in thuong cua mot ki tu
int to_lower(char c){
    if(c >= 'A' && c <= 'Z'){
        c += 32;
    }
    return c;
}

//tra ve dang in hoa cua mot ki tu
int to_upper(char c){
    if(c >= 'a' && c <= 'z'){
        c -= 32;
    }
    return c;
}

//tra ve do dai chuoi
int strlen(char c[]){
    int cnt = 0;
    while(c[cnt] != '\0')
        cnt++;
    return cnt;
}

//viet thuong tat ca cac ki tu trong xau
char* strlwr(char c[]){
    for(int i = 0; i < strlen(c); i++){
        if(c[i] >= 'A' && c[i] <= 'Z')
            c[i] += 32;
        //c[i] = to_lower(c[i])
    }
    return c;
}

//viet hoa tat ca cac ki tu trong xau
char* strupr(char c[]){
    for(int i = 0; i < strlen(c); i++){
        if(c[i] >= 'a' && c[i] <= 'z')
            c[i] -= 32;
        //c[i] = to_upper(c[i])
    }
    return c;
}

//so sanh hai chuoi a va b theo thu tu tu dien
int min(int a, int b){
    return a<b ? a:b;
}
int strcmp(char c[], char d[]){
    int n1 = strlen(c);
    int n2 = strlen(d);
    for(int i = 0; i < min(n1, n2); i++){
        if(c[i] != d[i]){
            if(c[i] > d[i])
                return 1;
            else return -1;
        }
    }
    if(n1 == n2){
        return 0;
    }else if(n1 < n2) return -1;
    else return 1;
}

//so sanh hai chuoi khong phan biet hoa thuong
int strcmpi(char c[], char d[]){
    int n1 = strlen(c);
    int n2 = strlen(d);
    strlwr(c);
    strlwr(d);
    for(int i = 0; i < min(n1, n2); i++){
        if(c[i] != d[i]){
            if(c[i] > d[i])
                return 1;
            else return -1;
        }
    }
    if(n1 == n2){
        return 0;
    }else if(n1 < n2) return -1;
    else return 1;
}

//chuyen 1 xau ki tu so thanh so nguyen long long
long long atoll(char c[]){
    long long res = 0;
    for(int i = 0; i < strlen(c); i++)
        res = res * 10 + c[i] - '0';
    return res;
}

//ham dao nguoc xau
char* strrev(char c[]){
    int l = 0, r = strlen(c) - 1;
    while(l < r){
        char tam = c[l];
        c[l] = c[r];
        c[r] = tam;
        ++l;
        --r;
    }
    return c;
}

int main(){
    char c[100];
    gets(c);
    printf("%s", strrev(c));
getch();
}
