#include <iostream> 
#include <cmath> 

using namespace std;
int main() {

	string text;
	int position = -2;
	cout << "Enter a word in English*:\n";
	cin >> text;
	for (int i = 0, limit = text.size(); i < limit; ++i)
	{
		if (text[i] == 'f' || text[i] == 'F')
		{
			++position;
			if (position == 0)
			{
				position = i;
				break;
			}
		}
	}
	cout << "Index of this entry: " << position << "\n";
	return 0;
}