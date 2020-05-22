#include <iostream> 
#include <cmath> 
using namespace std;

void dvoich(int x1) {
    int mod[1000];
    long c = 0, i = 0;
    do {
        mod[i] = (x1 % 2);
        i++;
        x1 /= 2;
    } while (x1 > 0);
    cout << " => ";
    for (i -= 1; i >= 0; i--) {
        cout << mod[i];
    }
}
int main() {
    int a;
    cout << "Enter a positive integer: ";
    cin >> a;
    cout << a;
    dvoich(a);
    return 0;
}