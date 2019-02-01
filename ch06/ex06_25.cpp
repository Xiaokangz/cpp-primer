#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	for (int i = 1; i != argc; ++i) {
		str = (str + argv[i]) + " ";
	}
	cout << str << endl;
	return 0;
}