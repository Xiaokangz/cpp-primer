#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> ivec;
	for (int i = 0; i < 10; ++i) {
		ivec.push_back(i);
	}
	for (auto it = ivec.begin(); it != ivec.end(); ++it) {
		*it *= 2;
	}
	for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) {
		cout << *it << endl;
	}
	return 0;
}