#include <iostream>
#include <string>
#include <map>
using namespace std;
map<char, unsigned int> BuildCharCounters(const string& s) {
	map<char, unsigned int> result;
	unsigned int limit = s.size();
	for (int i = 0; i < limit; ++i) {
		++result[s[i]];
	}
	return result;
}
int main() {
	map<char, unsigned int> first_map;
	map<char, unsigned int> second_map;
	string first_string;
	string second_string;
	cout << "Enter the words: \n";
	cin >> first_string >> second_string;
	first_map = BuildCharCounters(first_string);
	second_map = BuildCharCounters(second_string);
	cout << (second_map == first_map ? "YES" : "NO") << endl;
	return 0;
}