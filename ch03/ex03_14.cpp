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
	return 0;
}