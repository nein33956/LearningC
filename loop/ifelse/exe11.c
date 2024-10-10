#include <stdio.h>
#include<conio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap a = ");
    scanf("%f", &a);
    printf("Nhap b = ");
    scanf("%f", &b);
    printf("Nhap c = ");
    scanf("%f", &c);

    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("Phuong trinh vo so nghiem\n");
            }else{
                printf("Phuong trinh vo nghiem\n");
            }
        }else
            printf("Phuong trinh co nghiem duy nhat: %.2f\n", -c / b);
    }else{
        delta = b * b - 4 * a * c;
        if (delta > 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Nghiem thu nhat x1 = %.2f\n", x1);
            printf("Nghiem thu hai x2 = %.2f\n", x2);
        }else if (delta == 0){
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", -b / (2*a));
        }else
            printf("Phuong trinh vo nghiem\n");
    }
    getch();
    return 0;
}
