// dem so nguyen to co trong mang vua nhap

#include<stdio.h>
#include<conio.h>
#include<math.h>

//ham kiem tra so nguyen to
int prime(int x){
    for (int i = 2; i <= sqrt(x); i++){
        if(x % i == 0)
        return 0;
    }  
return x > 1;
}
//ham dem so nguyen to
int demsonguyento(int a[], int x){
    int dem = 0;
    for(int i = 0; i < x; i++){
        if(prime(a[i])) 
        ++dem;
    }
    return dem;
}

void main(){
    int n;
    printf("Nhap so phan tu cua mang :");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
    }
    printf("\nCo %d so nguyen to trong mang!", demsonguyento(a, n));
    getch();
}