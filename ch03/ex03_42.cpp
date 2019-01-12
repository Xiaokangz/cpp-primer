#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> ivec{0, 1, 2, 3, 4, 5};
	int arr[6];
	for (size_t i = 0; i < ivec.size(); ++i) {
		arr[i] = ivec[i];
	}
	return 0;
}