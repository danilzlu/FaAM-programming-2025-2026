#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// Вычисляет факториал неотрицательного целого числа
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return factorial(n-1)*n;
    }
}

int main() {
    int a, b;

    // Ввод и проверка ввода
    int res = scanf("%d", &a);
    if (res != 1 || a < 0) {        // Условие: если введено не одно целое число ИЛИ введённое число меньше нуля
        printf("Неверный формат ввода!");
        abort();                    // Экстренное завершение программы. Пользователь сам виноват
    }
    
    printf("%d", factorial(a));
    return 0;
}


