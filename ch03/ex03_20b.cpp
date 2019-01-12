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
	for (decltype(ivec.size()) start = 0, end = ivec.size(); start < end; ++start, --end) {
		cout << ivec[start] + ivec[end-1] << endl;
	}
	return 0;
}