#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> ivec;
	int x;
	while (cin >> x) {
		ivec.push_back(x);
	}
	for (auto it1 = ivec.cbegin(), it2 = ivec.cend(); it1 < it2; ++it1, --it2) {
		cout << *it1 + *(it2 - 1) << endl;
	}
	return 0;
}