#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

int cf(int n);
int is_leap_year(int y);
int is_prime(int n);
void init(int arr[], int sz);
void print(int arr[], int sz);
void reverse(int arr[], int sz);
int bin_search(int arr[], int left, int right, int key);