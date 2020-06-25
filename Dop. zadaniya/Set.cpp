#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    int Q;
    string str;
    set<string> bs;
    cout << "Number of records: ";
    cin >> Q;
    cout << "Enter the words: \n";
    for (Q; Q > 0; Q--) {
        cin >> str;
        bs.insert(str);
    }
    cout << "Unique words: " << bs.size() << endl;
    return 0;
}