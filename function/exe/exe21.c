//viet ham kiem tra so hoan hao
/*để kiểm tra N có phải là số hoàn hảo không thì ta chỉ cần tính tổng tất cả các ước của N
 trong khoảng từ 1 đến N - 1, nếu tổng bằng N thì đó là số hoàn hảo.
 vd 6 la so hoan hao vi trong khoang tu 1 toi 6 co 3 uoc la 1 2 3 ma tong ba uoc do bang 6*/
#include<stdio.h>
#include<conio.h>
//ham tinh tong cac uoc cua 1 so
int sohoanhao(int n){
    int sum = 0;   //khai bao biem sum tinh tong cac uoc
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0) 
        sum += i;
    }
    if(sum == n) return 1;//neu tong cac uoc bang so thi so do la so hoan hao
    return 0;
}

void main(){
    int a;
    printf("Nhap a: ");
    scanf("%d",&a);
    if(sohoanhao(a)){
        printf("Yes");
    }else printf("No");
getch();
}
 