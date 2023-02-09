#include<stdio.h>
#include<math.h>
#define S21_PI 3.141592653589793
static const double COS_EPS = 1e-6l;
long double s21_cos(double angle) {
    double result = 1;
    double step = 1;
    double i = 1;
    angle = fmod(angle, 2 * S21_PI);
    while(fabs(step) > COS_EPS) {
        step *= -angle  * angle / ((2 * i -1) * (2 * i));
        result += step;
        i++;
    }
    return result;


}
int main() {
    double ans = s21_cos(123);
    double true_ans = cos(123);
    printf("my %f\n", ans);
    printf("true %f\n", true_ans);

}