/*khai bao, khoi tao va gia tri*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    int a = 300;//khai bao + khoi tao gia tri cho bien a
    int *ptr = &a; //khai bao+khoi tao con tro ptr co gia tri bang dia chi cua bien a
    printf("Gia tri cua a la: %d\n", a);
    printf("Dia chi cua bien a la: %d\n", &a);
    printf("Gia tri cua con tro ptr: %d\n", ptr);
    printf("Gia tri cua bien ma con tro dang tro toi: %d", *ptr); // con tro ptr tro den bien a(giai tham chieu)
    printf("\n");
    printf("\n");
    *ptr = 1000;//thay doi gia tri cua bien a thong qua ptr: a=1000
    printf("Gia tri cua a la: %d\n", a);
    printf("Dia chi cua bien a la: %d\n", &a);
    printf("Gia tri cua con tro ptr: %d\n", ptr);
    printf("Gia tri cua bien ma con tro dang tro toi: %d", *ptr);// con tro ptr tro den bien a(giai tham chieu)
    free(ptr);
getch();
}

