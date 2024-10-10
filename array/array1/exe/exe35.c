//thuat toan kadane-day con lien tep co tong lon nhat
/*input:6                    output:
        -1 2 8 -3 9 -2           16*/

/*Cach hoat dong: khai bao hai bien
+ sum1: tinh tong day con lien tiep hien tai
+ sum2: luu gia tri tong lon nhat
- So sanh sum1 va sum2, neu sum2 nho hon sum1 thi cap nhat sum2=sum1, neu gia tri sum1<0 thi tra ve 0

Vidu voi input tren:
sum1 = -1 gan thanh 0/ sum1 = 0 + 2 = 2/ sum1 = 2 + 8 = 10/ sum1 = 10 + (-3) = 7/ sum1 = 7 + 9 = 16/ sum1 = 16 + (-2) = 14
sum2 = 0            / sum2 = 2       / sum2 = 10        / sum2 = 10            / sum2 = 16        / sum2 = 16             */
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
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        sum1 += a[i];
        if(sum2 < sum1)
            sum2 = sum1;
        if(sum1 < 0)
            sum1 = 0;
    }
    printf("%d", sum2);
getch();
}