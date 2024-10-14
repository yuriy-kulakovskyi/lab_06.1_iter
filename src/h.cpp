#include "../include/main.h"
#include <iostream>
#include <iomanip>

int Sort(int* b, int n) {
  for (int i = 0; i < n; i++) {
    b[i] = b[i] > 0 && b[i] % 2 != 0 ? b[i] : 0;
  }

  return 0;
}

int Sum(int* b, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += b[i];
  }

  return sum;
}