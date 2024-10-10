/*liet ke cac so co dung 3 uoc so nho hon n
vidu: 6 thi co 4 nho nhon 6 co 3 uoc la 1 2 4*/

/*input: 2       output:
        50              4 9 25 49
        200             4 9 25 49 121 169*/
#include<stdio.h>
#include<conio.h>

int dem(int n){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            ++dem;
    }
    if(dem == 3)
        return 1;
    return 0;
}

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            if(dem(i))
                printf("%d ", i);
        }
    printf("\n");
    }
getch();
}