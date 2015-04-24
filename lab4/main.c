#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main_lib.h"
#define N 30

int main()
{
    clock_t start = clock(), diff;
    printf("fib(%d): %d\n", N, fib(N));
    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Time taken %d seconds %d milliseconds\n\n", msec/1000, msec%1000);

    start = clock();
    printf("fib2(%d): %d\n", N, fib2(N));
    diff = clock() - start;
    msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Time taken %d seconds %d milliseconds\n", msec/1000, msec%1000);

    return 0;
}