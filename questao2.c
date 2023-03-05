#include <stdio.h>

int fibonacci(int n);
int is_in_fibonacci(int n);

int main() {
    int n;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);

    if (is_in_fibonacci(n)) {
        printf("%d pertence à sequência de Fibonacci.\n", n);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", n);
    }

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int is_in_fibonacci(int n) {
    int i = 0;
    while (fibonacci(i) <= n) {
        if (fibonacci(i) == n) {
            return 1;
        }
        i++;
    }
    return 0;
}