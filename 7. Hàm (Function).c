/*Hàm trong C giúp chia nhỏ chương trình thành các phần dễ quản lý hơn.*/
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 10, b = 20;
    printf("Sum = %d\n", add(a, b));
    return 0;
}
