#include "edu_math.h"

#include <stdio.h>
#include <stdlib.h>

#define UNIMPLEMENTED \
    do { \
        fprintf(stderr, "[ERROR] function %s is unimplemented\n", __func__); \
        abort(); \
    } while (0)

#define UNUSED(x) (void)(x)

int edu_add(int a, int b) {
    return a + b;
}

int edu_sub(int a, int b) {
    return a - b;
}

int edu_mult(int a, int b) {
    return a * b;
}

int edu_div(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "[ERROR] division by zero\n");
        abort();
    }
    return a / b;
}

int edu_mod(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "[ERROR] module by zero\n");
        abort();
    }
    return a % b;
}

int edu_pow(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

int edu_abs(int a) {
    return a < 0 ? -a : a;
}

int edu_gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int edu_lcm(int a, int b) {
    return (a / edu_gcd(a, b)) * b;
}

int edu_int_sqrt(int a) {
    if (a < 0) return -1;
    int x = 0;
    while ((x + 1) * (x + 1) <= a) x++;
    return x;
}

int edu_sgn(int a) {
    return (a > 0) - (a < 0);
}

int edu_fact(int a) {
    if (a < 0) return -1;
    int res = 1;
    for (int i = 2; i <= a; i++) res *= i;
    return res;
}