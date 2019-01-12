#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> svec;
	string str;
	while (cin >> str) {
		svec.push_back(str);
	}
	return 0;
}