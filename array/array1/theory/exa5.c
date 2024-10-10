// sap xep cac phan tu cua mang theo thu tu tang dan
#include<stdio.h>
#include<conio.h>

void sapxep(int a[], int n){  
    for (int i = 0; i < n - 1; i++)
    {
      //j sẽ được duyệt từ vị trí của phân tử chưa sắp xếp tới cuối mảng
        for (int j = i + 1; j < n; j++)
        {
         //Nếu phần tử đang kiểm tra(a[i]) lớn hơn phần tử khi ta duyệt mảng để kiểm tra(a[j])
             if(a[i] > a[j]) 
            {
               //Ta đảo vị trí của 2 phần tử
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
