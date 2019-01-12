#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> avec;
	vector<int> bvec;
	for (int i = 0; i < 10; ++i) {
		avec.push_back(i);
	}
	bvec = avec;
	return 0;
}