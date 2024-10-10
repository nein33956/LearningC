//tim day con tang co do dai dai nhat, in ra day con do, neu co nhieu day con co cung chieu dai thi in ra day dau tien
/*input: 10                      output:
        1 2 3 3 3 4 5 2 1 -3            3*/
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
    printf("\n");
    int res = 0, count = 1, idx;//khoi tao bien count de dem, bien res de luu do dai, idx de luu chi so bat dau cua doan con tang dai nhat
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){//neu a[i] lon hon phan tu dung truoc no thi chung to doan con tang dan
            ++count;//tang bien dem len
        }else{ 
            count = 1;//nguoc lai doan k tang thi tra bien count ve gia tri ban dau la 1 roi thuc hien lai
        }
        if(count > res){
            res = count;
            idx = i - res + 1;
        }
    }
    printf("%d\n", res);
    for(int i = 0; i < res; i++){
        printf("%d ", a[idx + i]);
    }
getch();
}