#include <iostream> 
using namespace std;

int main() {

    long int F1 = 1, F2 = 2, F = 0;
    long double S = 2;
    do {
        F = F1 + F2;
        if (F % 2 == 0)
            S += F;
        F1 = F2;
        F2 = F;
    } while (F <= 4000000);

    cout << "Summ = " << S << endl;
    return 0;

}