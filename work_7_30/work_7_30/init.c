#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

void init(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        arr[i] = 0;
    }
}
