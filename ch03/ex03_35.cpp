#include <iostream>
#include <cstddef>
using namespace std;

int main(int argc, char const *argv[])
{
	int ia[10];
	for (size_t i = 0; i < 10; ++i) {
		ia[i] = (int) i;
	}
	auto last = end(ia);
	for (auto it = begin(ia); it != last; ++it) {
		*it = 0;
	}
	return 0;
}