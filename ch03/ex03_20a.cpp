#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> ivec;
	int temp;
	while (cin >> temp) {
		ivec.push_back(temp);
	}
	for (decltype(ivec.size()) ix = 1; ix < ivec.size(); ++ix) {
		cout << ivec[ix] + ivec[ix-1] << endl;
	}
	return 0;
}