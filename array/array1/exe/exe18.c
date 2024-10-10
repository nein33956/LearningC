/*cho mang cac so nguyen khac nhau doi mot,
liet ke cac phan tu cua mang co it nhat hai phan tu lon hon no trong mang*/
/*input: 5          output:
        3 5 7 11 13       3 5 7 */
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
    printf("\n");
    for(int i = 0; i < n; i++){
        if(a[i] < max2) printf("%d ", a[i]);
    }
getch();
}