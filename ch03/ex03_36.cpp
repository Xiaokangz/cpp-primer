#include <iostream>
#include <vector>
using namespace std;

bool isEqual(const int a[], const int b[], size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

bool isEqual(const vector<int> &a, const vector<int> &b)
{
	return a == b;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}