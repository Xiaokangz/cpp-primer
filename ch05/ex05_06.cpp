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
	lettergrade = grade < 60 ? scores[0] : scores[(grade - 50)/10];
	lettergrade += (grade == 100 ? "" : (grade % 10 > 7 ? "+" : (grade % 10 < 3 ? "-" : "")));
	cout << lettergrade << endl;
	return 0;
}