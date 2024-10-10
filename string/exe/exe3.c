//dem so luong chu cai, chu so, ki tu dac biet trong chuoi
/* input: Python 123@@     output: 6 3 3*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
//ham kiem tra ki tu co phai chu cai hay khong
int is_alpha(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

//ham kiem tra ki tu co phai chu so hay khong
int is_digit(char c){
    if(c >= '0' && c <= '9')
        return 1;
    return 0;
}

int main(){
    char c[1005];
    gets(c);
    //khoi tao cnt1 dem chu cai
    //khoi tao cnt2 dem chu so
    //ki tu dac biet la cac ki tu con lai trong xau
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < strlen(c); i++){
        if(is_alpha(c[i])) ++cnt1;
        else if(is_digit(c[i])) ++cnt2;
    }
    printf("%d %d %d", cnt1, cnt2, strlen(c) - cnt1 - cnt2);
getch();
}
