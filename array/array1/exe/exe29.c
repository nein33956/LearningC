//tim day con lien tiep co hai phan tu lien ke nhau trai dau nhau co do dai dai nhat
/*input: 10                      output:
        1 2 3 3 3 4 5 2 1 -3            2*/
#include<stdio.h>
#include<conio.h>
long long max(long long a, long long b){
    return a<b ? b:a;
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

    int res = 0, count = 1;//khoi tao bien count de dem, bien res de luu do dai
    for(int i = 1; i < n; i++){
        if(a[i] * a[i-1] < 0){
            ++count;
        }else{ 
            count = 1;
        }
        res = max(res, count);
    }
    if(res == 1)
        printf("0");
    if(res >= 2)
        printf("%d", res);
getch();
}