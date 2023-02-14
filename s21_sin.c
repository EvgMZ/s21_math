#include "s21_math.h"
#include <math.h>

long double factorial (long long int num) {
    if (num < 0){
        return -1;
    }
    if (num == 0 || num == 1){
        return 1;
    }
    return (factorial(num - 1) * num);
}
long double s21_sin(double an){
    long double sin = 0;
    an = fmod(an,2 * S21_PI);
    for (int i = 0; i < 15; i++){
        long double up = pow(-1, i) * pow(an, 2 * i + 1);
        long double down = factorial(2 * i + 1);
        sin += up / down;
    }
    return sin;
}
/*int main() {
    long double result = s21_sin(25);
    long double true_res = sin(25);
    long double res_cos = cos(25);
    printf("test = %f\n", sin(25) / cos(25));
    printf("my res = %Lf, true res = %Lf\n", result, true_res);
}*/