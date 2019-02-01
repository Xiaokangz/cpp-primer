#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isCapital(const string &str);

void toLower(string &str);

int main(int argc, char const *argv[])
{
	string str1 = "Abc";
	cout << str1 << " contains capital: " << isCapital(str1) << endl;
	cout << "nnnn" << " contains capital: " << isCapital("nnnn") << endl;
	string str2 = "AbCdEf";
	cout << "before changing: " << str2 << endl;
	toLower(str2);
	cout << "after changing: " << str2 << endl;
	return 0;
}

bool isCapital(const string &str)
{
	for (auto ch : str) {
		if (isupper(ch)) {
			return true;
		}
	}
	return false;
}

void toLower(string &str)
{
	for (auto &ch : str) {
		ch = tolower(ch);
	}
}