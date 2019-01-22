#include <vector>
#include <iostream>
using namespace std;

bool is_prefix(vector<int> &ivec1, vector<int> &ivec2)
{
	if (ivec1.size() > ivec2.size()) {
		return is_prefix(ivec2, ivec1);
	}
	for (decltype(ivec1.size()) ix = 0; ix != ivec1.size(); ++ix) {
		if (ivec1[ix] != ivec2[ix]) {
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	vector<int> ivec1{0, 1, 1, 2, 3, 5, 8};
	vector<int> ivec2{0, 1, 1, 2};
	cout << is_prefix(ivec1, ivec2) << endl;
	return 0;
}