//in ra cac so xuat hien trong mang
/*input: 10                     output:
        1 2 3 3 3 3 1 9 9 0            1 2 3 9 0*/
#include<stdio.h>
#include<conio.h>
int mark[1000001] = {0};
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
        if(mark[a[i]] == 0){
            printf("%d ", a[i]);
            mark[a[i]] = 1;
        }
    }
getch();
}