#include <stdio.h>
#include <stdlib.h>

// Вычисление наобольшего общего делителя с помощью рекурсивной реализации алгоритма Евклида
int gcd(int a, int b) {
    if (b == 0) {
        return abs(a);
    }

    int q = abs(a) % b; 
    if (q == 0) {
        return abs(b);
    }
    return gcd(b, q);
}

int main() {
    int a, b;

    // Ввод и проверка ввода
    int res = scanf("%d %d", &a, &b);
    if (res != 2) {
        printf("Неверный формат ввода!");
        abort();
    }
    
    int r = gcd(a, b);
    printf("%d", r);
    return 0;
}


