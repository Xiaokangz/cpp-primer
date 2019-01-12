#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {0, 1, 2, 3, 4, 5};
	vector<int> ivec(begin(arr), end(arr));
	for (const auto i : ivec) {
		cout << i << endl;
	}
	return 0;
}