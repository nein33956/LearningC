//liet ke cac phan tu lon hon phan tu dung truoc no
/*input: 6           output
       1 2 9 2 0 22        1 2 9 22*/
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
    int max = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] >= max){
            printf("%d ", a[i]);
        }
        if(a[i] > max) max = a[i];
    }
getch();
}