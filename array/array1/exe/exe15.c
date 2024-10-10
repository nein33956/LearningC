// tim gia tri nho nhat cua mang va in ra vi tri, neu co nhieu gia tri nho nhu nhau thi in ra vi tri pt dau tien
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
    
    int max = a[0];
    int max_index = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max){ //muon xem vi tri pt sau thi them dau =
            max = a[i];
            max_index = i;
        }
    }
    printf("\n%d", max_index + 1);
getch();
}