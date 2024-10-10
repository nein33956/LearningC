#include<stdio.h>
#include<conio.h>

void menu(){
    printf("=====================\n");
    printf("         MENU        \n");
    printf("=====================\n");
    printf("1. Cong\n");
    printf("2. Tru\n");
    printf("3. Nhan\n");
    printf("4. Chia\n");
    printf("5. Chiadu\n");
}

int cong(int a, int b){
    return(a + b);
}

int tru(int a, int b){
    return(a - b);
}

int nhan(int a, int b){
    return(a * b);
}

float chia(int a, int b){
    return(a / b);
}

float chiadu(int a, int b){
    return(a % b);
}

void main(){
    menu();
    int a, b, luachon;
    printf("Moi ban chon(1-5):");
    scanf("%d", &luachon);
    printf("Moi ban nhap a b:", a, b);
    scanf("%d %d", &a, &b);
    switch(luachon){
        case 1 : printf("%d", cong(a,b)); break;
        case 2 : printf("%d", tru(a,b)); break;
        case 3 : printf("%d", nhan(a,b)); break;
        case 4 : printf("%.2f", chia(a,b)); break;
        case 5 : printf("%.2f", chiadu(a,b)); break;
        default: printf("Khong hop le!");
    }
getch();
}