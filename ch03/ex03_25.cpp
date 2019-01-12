#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto start = scores.begin();
	while (cin >> grade) {
		if (grade <= 100) {
			++(*(start + grade / 10));
		}
	}
	for (auto it = scores.cbegin(); it != scores.cend(); ++it) {
		cout << *it << endl;
	}
	return 0;
}