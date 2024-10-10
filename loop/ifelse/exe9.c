/*Viết chương trình C++ xếp hạng học lực của học sinh dựa trên các điểm bài kiểm tra, điểm thi giữa kỳ, điểm thi cuối kỳ. Nếu:

Điểm trung bình >= 9.0 là hạng A.
Điểm trung bình >=7.0 và < 9.0 là hạng B
Điểm trung bình >=5.0 và < 7.0 là hạng C
Điểm trung bình <5.0 là hạng F*/

#include<stdio.h>
#include<conio.h>
void main(){
    float a, b, c, dtb;
    printf("Nhap a, b, c:");
    scanf("%f %f %f", &a, &b, &c);
    dtb = (a + b + c) / 3;
    printf("Diem trung binh la: %.2f\n", dtb);
    if(dtb >= 9) printf("Xep hang A");
    else if(dtb >= 7 && dtb < 9){
        printf("Xep hang B");
    }else if(dtb >= 5 && dtb < 7){
        printf("Xep hang C");
    }else if(dtb < 5){
        printf("Xep hang D");
    }
getch();
}
