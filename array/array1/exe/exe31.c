//day con tang lien tiep
/*input: 2                                output:
        16
        2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12     4
                                               2 3 5 7
                                               4 5 8 9
                                               6 7 10 12
        12                                     3
        2 3 2 3 2 3 2 2 2 3 4 1                2 3 4*/
#include<stdio.h>
#include<conio.h>
int main(){
    int t;
    //nhap so ;uong testcase tu ban phim
    scanf("%d", &t);
    //dung vong lap tu 1 toi t de thuc hien cac testcase
    for(int i = 1; i <= t; i++){
        //khai bao va nhap mang
        int n;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }
        printf("\n");
        //khoi tao bien res = 0 de luu tru do dai cua doan con tang dai nhat
        //khoi tao bien count = 0 de luu so luong doan con tang dan co cung do dai voi res
        //khoi tao mang b[] de luu tru chi so bat dau cua cac doan con tang dan co cung do dai voi res
        //khoi tao bien dem = 1 de dem do dai cua doan con tang dan
        int res = 0, count = 0, b[n], dem = 1;
        //vong lap duyet phan tu dau tien den phan tu cuoi cung trong mang a[]
        for(int i = 1; i < n; i++){
            //neu phan tu a[i] lon hon phan tu dung truoc no, tuc la doan con tang dan, tang bien dem len 1
            //neu khong thi gan lai gia tri 1 cho bien dem de thuc hien lai
            if(a[i] > a[i-1])
                ++dem;
            else
                dem = 1;
            //neu bien dem lon hon bien res, ta gan gia tri bien res cho dem
            //va gan gia tri b[0] la chi so bat dau cho doan con tang dai nhat va dat count bang 1
            if(dem > res){
                res = dem;
                b[0] = i - res + 1;
                count = 1;
            // neu bien dem bang bien res, ta gan b[count va tang gia tri bien count]
            }else if(dem == res){
                b[count] = i - res + 1;
                ++count;
            }
        }
        printf("Test %d:\n", i);
        printf("%d\n", res);
        // chương trình in ra các đoạn con tăng dần dài nhất.
        //Vòng lặp for thứ hai duyệt qua các giá trị trong mảng b, lấy giá trị b[i] là chỉ số bắt đầu của đoạn con, 
        //và in ra res phần tử của đoạn con từ mảng a.
        for(int i = 0; i < count; i++){
            for(int j = 0; j < res; j++)
                printf("%d ", a[b[i] + j]);
            printf("\n");
        }
    }
getch();
return 0;
}