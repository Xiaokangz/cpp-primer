#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string str1, str2;
	cin >> str1 >> str2;
	if (str1 > str2) {
		cout << str1 << endl;
	} else if (str1 < str2) {
		cout << str2 << endl;
	}
	return 0;
}