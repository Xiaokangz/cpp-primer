#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned grade;
	string finalgrade;
	cin >> grade;
	finalgrade = (grade < 60) ? "fail" : ((grade < 75) ? "low pass" : ((grade < 90) ? "pass" : "high pass"));
	cout << finalgrade << endl;
	return 0;
}