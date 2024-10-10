/*cho mang 1 chieu co n so nguyen, liet ke cac phan tu lien ke trai dau voi no*/
/*input: 7                  ouput:
        -1 2 3 -1 5 8 9          -1 2 3 -1 5*/
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
    printf("\n");
    for(int i = 0; i < n; i++){
        if(i == 0 && a[0]*a[1] < 0){
            printf("%d ", a[0]);
        }else if( i == n-1 && a[n-1] * a[n-2] < 0){
            printf("%d ", a[n-1]);
        }else if(a[i] * a[i-1] < 0 || a[i] * a[i+1] < 0){
            printf("%d ", a[i]);
        }
    }
getch();
}