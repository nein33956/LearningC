/*Truyền tham chiếu là truyền địa chỉ ô nhớ của biến, do đó khi thay đổi giá trị của biến
bên trong phương thức thì giá trị của biến cũng bị thay đổi bên ngoài phương thức.
VD: #include<stdio.h>
    void change(int *num){
        *num = *num + 1;
    }
    int main() {
        int x = 100;
        printf("Truoc khi goi phuong thuc x = %d \n", x);
        change(&x); // truyen tham chieu vao phuong thuc
        printf("Sau khi goi phuong thuc x = %d \n", x);
        return 0;
    }
    Truoc khi goi phuong thuc x = 100
    Sau khi goi phuong thuc x = 101
    
Truyền tham trị là truyền giá trị của biến (không phải là địa chỉ ô nhớ), khi đó phương thức sẽ tự động tạo ra
 một địa chỉ ô nhớ mới để lưu trữ giá trị này, do đó nó chỉ được thay đổi trong phương thức hiện hành và giá trị
của biến không bị thay đổi bên ngoài phương thức hiện hành.
VD: #include<stdio.h>
    void change(int num){
        num = num + 1;
    }
 
    int main() {
        int x = 100;
        printf("Truoc khi goi phuong thuc x = %d \n", x);
        change(x); // truyen tham tri vao phuong thuc
        printf("Sau khi goi phuong thuc x = %d \n", x);
        return 0;
        }
        Truoc khi goi phuong thuc x = 100
        Sau khi goi phuong thuc x = 100
*/