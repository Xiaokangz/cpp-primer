#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string total, temp;
	while (cin >> temp) {
		total += temp;
	}
	cout << total << endl;
	return 0;
}