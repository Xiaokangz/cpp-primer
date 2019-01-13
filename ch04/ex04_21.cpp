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

	for (auto &x : ivec) {
		x = (x % 2) ? 2*x : x;
	}

	for (const auto x : ivec) {
		cout << x << endl;
	}
	return 0;
}