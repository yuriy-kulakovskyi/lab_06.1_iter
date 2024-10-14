#include <iostream>
#include <iomanip>
#include "../include/main.h"

using namespace std;

int main() {
    srand((unsigned)time(NULL));

    const int n = 23;
    int b[n];
    int Low = -25;
    int High = 80;


    for (int i = 0; i < n; i++) {
        b[i] = Low + rand() % (High - Low + 1);
    }

    for (int i = 0; i < n; i++) {
        cout << setw(4) << b[i];
    }

    cout << endl;

    Sort(b, n);

    for (int i = 0; i < n; i++) {
        cout << setw(4) << b[i];
    }

    cout << endl;

    cout << "The sum is: " << Sum(b, n) << endl;

    return 0;
}