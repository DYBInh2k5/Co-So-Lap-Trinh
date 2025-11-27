/*Con trỏ là một biến chứa địa chỉ của một biến khác.*/
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;  // Con trỏ ptr trỏ đến x
    
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void*)&x);
    printf("Value stored at ptr = %d\n", *ptr);
    
    return 0;
}
