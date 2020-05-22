#include <iostream>
#include <string>
using namespace std;

void IsPalindrom(string s) {
	string temp;
	bool t = true;
	for (int i = s.size() - 1; i >= 0; --i) {
		temp += s[i];
		t = false;
	}
	if (s == temp) {
		cout << "palindrome\n";
	}
	else {
		cout << "not a palindrome\n";
	}
}

int main() {
	string s;
	cout << "Enter the word:\n";
	cin >> s;
	IsPalindrom(s);

	return(0);
}