/*Nhập 1 dãy số nguyên đưa ra màn hình các số nguyên tố có trong mảng, vị trí các số đó trong mảng.*/
#include<stdio.h>
#include<conio.h>
//ham in ra cac so nguyen to co trong mang
int primenumber(int a[], int n){
    for(int i = 0; i < n; i++){
        int check = 1;
        for(int j = 2; j < a[i]; ++j){
            if(a[i] % j == 0){
                check = 0;
            }
        }
        if(a[i] >= 2 && check == 1)
        printf("So nguyen to %d co vi tri thu %d trong mang\n", a[i], i + 1);
    }
}

void main(){
    int n;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("Phan tu thu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    primenumber(a, n);
getch();
}