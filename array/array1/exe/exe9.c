/*in ra max min va sap xep tang giam cua mang*/
#include <stdio.h>
#include <conio.h>
#define SIZE 20

// khai báo các nguyên mau hàm
void Nhap(int *a, int *n);
void Xuat(int *a, int n);

//ham nhap mang
void Nhap(int *a, int *n){
	do {
		printf("Nhap so phan tu:");
		scanf("%d", &(*n));
	}while(*n < 1 || *n > SIZE);
	for(int i = 0; i < *n; i++) {
		printf("Phan tu thu a[%d]:", i);
		scanf("%d", &a[i]);
	}
}
// ham xuat mang
void Xuat(int *a, int n){
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
		printf("\n");
}
// ham tim so lon nhat trong mang
void solonnhat (int *a, int n){
	int max = a[0];
	for (int i = 0; i < n; i++)
	    if (a[i] > max) max = a[i];
	printf ("So lon nhat la %d\n",max);
}
// ham tim so nho nhat trong mang
int sonhonhat (int *a, int n){
	int min = a[0];
	for (int i = 0; i < n; i++)
	    if (a[i] < min) min = a[i];
	printf ("So be nhat la %d\n",min);
}
// ham sap xep pt trong mang tang dan
int xeptangdan (int *a, int n){
	int tam = 0;
	for (int j = 0; j < n-1; j++){
		for (int i = 1; i < n; i++){
			if (a[i] < a[i-1]){
				tam = a[i];
				a[i] = a[i-1];
				a[i-1] = tam;
			}
		}
	}
	printf ("Xep theo thu tu tang dan: ");
}
//ham sap xep phan tu trong mang giam dan
int xepgiamdan(int *a, int n)
{
	int tam = 0;
	for (int j = 0; j < n-1; j++){
		for (int i = 1; i < n; i++){
			if (a[i] > a[i-1]){
				tam = a[i];
				a[i] = a[i-1];
				a[i-1] = tam;
			}
		}
	}
	printf ("Xep theo thu tu giam dan: ");
}

int main() {
	int a[SIZE], n;
		Nhap(a, &n);
		Xuat(a, n);
		solonnhat(a, n);
		sonhonhat(a, n);
		xeptangdan(a, n);
		Xuat(a, n);
		xepgiamdan(a, n);
		Xuat(a, n);
getch();
}