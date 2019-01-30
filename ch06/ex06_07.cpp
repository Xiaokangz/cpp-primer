#include <iostream>
using namespace std;

int f()
{
	static int count = 0;
	return count++;
}

int main(int argc, char const *argv[])
{
	for (size_t i = 0; i != 10; ++i) {
		cout << f() << endl;
	}
	return 0;
}