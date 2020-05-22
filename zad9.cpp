#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a = 0, b = 0;
    for (int i = 1; i < 101; i++) {
        a += i * i;
    }
    cout << "Sum of squares \n1^2 + 2^2 + .... 100^2 = " << a << endl;
    for (int i = 1; i < 101; i++) {
        b += i;
    }
    b = pow(b, 2);
    cout << "Amount squared \n(1 + 2 + ... + 100)^2 = " << b << endl;

    int r = b - a;
    cout << "Difference:\n";
    cout << b << " - " << a << " = " << r << endl;
    return 0;
}