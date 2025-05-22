#include <stdio.h>

int main() {
    int n = 10;
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
 
    //Generate numbers
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}
