//tim va in ra so lon nhat va so lon thu 2 trong mang
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    int max1 = a[0], max2 = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max1){
        max2 = max1;
        max1 = a[i];
        }else if(a[i] > max2){
            max2 = a[i];
        }
    }
    printf("\n%d %d", max1, max2);
getch();
}