//kiem tra xem mang co doi xung hay k neu co in ra yes khong in ra no
#include<stdio.h>
#include<conio.h>

int dx(int a[], int n){
    int left = 0, right = n - 1;
    while(left < right){
        if(a[left] != a[right])
            return 0;
        ++left, --right;
    }
    return 1;
}
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
    printf("\n");
    if(dx(a, n)){
        printf("Yes");
    }else printf("No");
getch();
}