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
	for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) {
		auto it_next = it + 1;
		if (it_next != ivec.cend()) {
			cout << *it + *it_next << endl;
		}
	}
	return 0;
}