#include <stdio.h>

#define define_sum_func(T, FUNC_NAME) \
    T FUNC_NAME(T a, T b) { \
        return a + b; \
    } \


define_sum_func(int, sum_int);
define_sum_func(double, sum_float);

int main() {
    int a = 3, b = 6;
    printf("%d\n", sum_int(a, b));

    double d = 3.3, e = 4.3;
    printf("%f\n", sum_float(d, e));
    return 0;
}