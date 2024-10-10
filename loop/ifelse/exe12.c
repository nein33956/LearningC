#include <stdio.h>
#include<conio.h>

double tinh_tien_taxi(double km) {
    if(km <= 1){
        return km * 15.0;
    }else if(km <= 5){
        return km * 13.0;
    }else{
        double tien = 15.0 + 4.0 * 13.0 + (km - 5.0) * 11.0;
        if(km > 120){
            double giam_10_phan_tram = tien * 0.1;
            tien -= giam_10_phan_tram;
        }
        return tien;
    }
}

int main(){
    double so_km;
    printf("Nhap so km di taxi: ");
    scanf("%lf", &so_km);
    double tong_tien = tinh_tien_taxi(so_km);
    printf("So tien phai tra la: %.3lf\n", tong_tien);
    getch();
    return 0;
}
