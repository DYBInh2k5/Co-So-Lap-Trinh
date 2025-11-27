/*Sử dụng if-else để kiểm tra điều kiện và điều hướng luồng của chương trình.

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    
    return 0;
}
