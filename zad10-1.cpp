#include <iostream>

using namespace std;
int main() {

	int a;
	cout << "Enter the number: " << endl;
	cin >> a;
	cout << a << "! = ";

	int N = 100;
	int count = 0;
	//----------------------------------
	int m[5000];
	for (int i = 0; i < 5000; i++) {
		m[i] = 0;
		m[0] = 1;
	}
	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < 5000; j++) {
			m[j] *= i;
		}
		for (int j = 0; j < 5000; j++) {
			if (m[j] > 10) {
				m[j + 1] += m[j] / 10;
				m[j] = m[j] % 10;
			}
		}
	}
	bool b = true;
	for (int i = 4999; i >= 0; i--) {
		if (m[i] == 0 && b == true)
			continue;
		else
			b = false;
		cout << m[i];
	}

	for (int i = 0; i < 5000; i++) {
		count += m[i];
	}

	cout << "\nSumm = " << count << endl;

	return 0;
}