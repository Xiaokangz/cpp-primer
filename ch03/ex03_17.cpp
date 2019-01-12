#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> svec;
	string str;
	while (cin >> str) {
		for (auto &c : str) {
			c = toupper(c);
		}
		svec.push_back(str);
	}
	for (const auto &s : svec) {
		cout << s << endl;
	}
	return 0;
}