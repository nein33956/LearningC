/*Hàm strcmp() trong C được sử dụng để so sánh 2 chuỗi theo thu tu tu dien
 Nếu hàm strcmp(str1, str2) trả về 0 thì 2 chuỗi bằng nhau, 
 lớn hơn 0 thì chuỗi str1 lớn hơn chuỗi str2 và ngược lại nếu nhỏ hơn 0 thì chuỗi str1 nhỏ hơn str2*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void main(){
    char str1[20], str2[20];    
    printf("Nhap chuoi 1: ");
    gets(str1); 
    printf("Nhap chuoi 2: ");
    gets(str2);
    printf("%d", strcmp(str1, str2));
getch();
}