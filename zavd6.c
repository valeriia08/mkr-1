#include <stdio.h>
#include <math.h>

double f(double x) {
    if (x > 0) {
        return x * x + 5 * x - 6;
    } else {
        return fabs(x) + cos(x); //fabs ф-ія модуль
    }
}

int main() {
    double x;

    // Введення значення x
    printf("Введіть значення x: ");
    scanf("%lf", &x);

    // Обчислення значення функції f(x)
    double result = f(x);

    // Виведення результату
    printf("Значення функції f(x): %.2lf\n", result);

    return 0;
}