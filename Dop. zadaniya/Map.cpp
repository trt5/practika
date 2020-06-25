#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;
int main() {
    int commandsCount;
    cin >> commandsCount;
    map<string, set<string>> synonyms;
    string command;
    for (; commandsCount > 0; commandsCount--) {
        cin >> command;
        if (command == "ADD") {
            string word1, word2;
            cin >> word1 >> word2;
            synonyms[word1].insert(word2);
            synonyms[word2].insert(word1);
        }
        else if (command == "COUNT") {
            string word;
            cin >> word;
            size_t synonymsCount;
            auto it = synonyms.find(word);
            if (it != synonyms.end())
                synonymsCount = it->second.size();
            else synonymsCount = 0;
            cout << synonymsCount << endl;
        }
        else if (command == "CHECK") {
            string word1, word2;
            cin >> word1 >> word2;
            bool isSynonyms = false;
            auto it = synonyms.find(word1);
            if (it != synonyms.end())
                if (it->second.find(word2) != it->second.end())
                    isSynonyms = true;
            cout << (isSynonyms ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
