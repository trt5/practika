#include <iostream> 
#include <cmath> 

using namespace std;
int main() {

    double a, b, c, D, x1, x2;
    cout << "Roots of the equation: \n";
    cin >> a >> b >> c;
    if (a == 0) {
        x1 = -(c / b);
        cout << "x1 = x2 = " << x1 << "\n";
    }
    else {
        D = pow(b, 2) - 4 * a * c;

        if (D > 0) {
            x1 = ((-b) + sqrt(D)) / (2 * a);
            x2 = ((-b) - sqrt(D)) / (2 * a);
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";
        }
        if (D == 0) {
            x1 = -(b / (2 * a));
            cout << "x1 = x2 = " << x1 << "\n";
        }
        if (D < 0)
            cout << "D < 0, No roots\n";
    }
    return 0;
}