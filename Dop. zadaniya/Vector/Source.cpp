#include "Vector3.h"
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");

    Vector3 a(17, -16, 41);
    Vector3 b(7, 51, 17);
    cout << "Vector a(17, -16, 41);\nVector b(7, 51, 17);\n”гол между векторами составл€ет: ";
    cout << acos(a.getScalarProduct(b) / (a.getNorma() * b.getNorma())) << endl;
    return 0;
}