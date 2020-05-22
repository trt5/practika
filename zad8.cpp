#include <iostream> 
#include <math.h>
#include <stdlib.h>
using namespace std;

void fun(int s, int oi) {
    int p = oi, a = 0, b = 0, c = 0, abc = 0;
    for (int n = 1; n < p; n++) {
        for (int m = 2; m < (p + 1); m++) {
            if (m > n) {
                a = 2 * n * m;
                b = pow(m, 2) - pow(n, 2);
                c = pow(m, 2) + pow(n, 2);

                if (a + b + c == s) {
                    cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl;
                    abc = a * b * c;
                    cout << "A * B * C = " << abc << endl;
                    break;
                }
            }
        }
    }
    p += oi;
}

int main() {
    int summ = 1000;
    int step = 100;

    fun(summ, step);
}