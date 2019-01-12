#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	for (auto c : str) {
		if (!ispunct(c)) {
			cout << c;
		}
	}
	cout << endl;
	return 0;
}