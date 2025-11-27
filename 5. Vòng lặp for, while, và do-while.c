/*C có ba loại vòng lặp để thực hiện lặp lại mã.

Vòng lặp for:*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}
/*Vòng lặp while:*/
int i = 1;
    while (i <= 5) {
        printf("Iteration %d\n", i);
        i++;
    }
    return 0;
}
/*Vòng lặp do-while:*/
int i = 1;
    do {
        printf("Iteration %d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}