#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string cmd;
	do {
		cout << "Input two strings:" << endl;
		string str1, str2;
		cin >> str1 >> str2;
		cout << (str1.size() < str2.size() ? str1 : str2) << endl;
		cin >> cmd;
	} while (!cmd.empty() && tolower(cmd[0]) == 'y');
	return 0;
}