#include "s21_math.h"
#include <math.h>

double s21_tan( double x) {
    double an_sin = s21_sin(x);
    double an_cos = s21_cos(x);
    printf("cos = %f, sin = %f\n", an_sin, an_cos);
    return (s21_sin(x) / s21_cos(x));
}

int main() {
    double ans = s21_tan(25);
    printf("%f\n", ans);
    printf("true %f\n", tan(25));
}