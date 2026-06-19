#include <stdio.h>

int main() {
    int i, fact = 1, n = 5;

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %d", fact);
    return 0;
}