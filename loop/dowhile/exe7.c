//tinh tong chu so cac so vua nhap
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1;
    do{
        printf("%d\n",i);
        ++i;
    }while (i<=5);
    printf("Gia tri bien i sau vong lap: %d", i);
    getch();
}