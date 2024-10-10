//in ra mang su dung con tro
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        scanf("%d", a+i);//a la con tro trong mang va a o vi tri pt dau tien
    }
    for(int i = 0; i < n; i++){
        printf("%d ", *(a+i));
    }
getch();
}