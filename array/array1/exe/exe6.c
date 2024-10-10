//viet ham tim gia tri duong dau tien trong mang mot chieu cac so thuc neu mang k co gia tri duong thi tra ve -1
#include<stdio.h>
#include<conio.h>

int duong(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] > 0)   
        return a[i];
    }
    return -1;
}

void main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
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
    printf("%d", duong(a, n));
getch();
}
