#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(string str)
{
	stringstream s(str);
	string word;

	int count = 0;
	while (s >> word)
		count++;
	return count;
}
int main()
{
	string s = "Harini "
			"I love cpp";
	cout << " Number of words are: " << countWords(s) << endl;
	return 0;
}
