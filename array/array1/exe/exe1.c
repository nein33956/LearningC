/*Nhập 1 dãy số nguyên không quá 50 phần tử, in ra màn hình dãy số đã nhập
Đưa ra màn hình số lớn nhất có trong dãy và vị trí của nó trong dãy.
Sắp xếp dãy số theo giá trị các phần tử tăng dần
Tính tổng và trung bình cộng các số có trong dãy.*/
#include<stdio.h>
#include<conio.h>
//ham kiem tra so lon nhat va vi tri lon nhat
int solonnhat(int a[], int n){
    int max = a[0];
    int max_index = 0;
    for(int i = 1; i < n; i++){
        if(max < a[i]){
            max = a[i];   
            max_index = i;
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Vi tri cua phan tu lon nhat la: %d", max_index + 1);
}
//ham tinh tong cac phan tu va trung binh cong
int tong(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    printf("\nTong cac phan tu trong mang la: %d", sum);
    printf("\nTrung binh cong cac phan tu trong mang la: %.2f", (float)sum / n);
}
void main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("Phan tu thu a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    solonnhat(a, n);
    tong(a, n);
getch();
}