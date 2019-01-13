#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	const vector<string> scores = {"F", "E", "D", "C", "B", "A", "A++"};
	string lettergrade;
	unsigned grade;
	cin >> grade;
	if (grade < 60) {
		lettergrade = scores[0];
	} else {
		lettergrade = scores[(grade - 50)/10];
		if (grade != 100) {
			if (grade % 10 > 7) {
				lettergrade += '+';
			} else if (grade % 10 < 3) {
				lettergrade += '-';
			}
		}
	}
	cout << lettergrade << endl;
	return 0;
}