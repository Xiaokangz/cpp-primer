#include <iostream>
#include <cstddef>

int main(int argc, char const *argv[])
{
	int ia[10];
	int ib[10];
	for (size_t i = 0; i < 10; ++i) {
		ia[i] = (int) i;
	}
	for (size_t i = 0; i < 10; ++i) {
		ib[i] = ia[i];
	}
	return 0;
}