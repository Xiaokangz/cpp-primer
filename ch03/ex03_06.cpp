#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	for (auto &c : str) {
		c = 'X';
	}
	cout << str << endl;
	return 0;
}