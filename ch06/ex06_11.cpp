#include <iostream>
using namespace std;

void reset(int &n)
{
	n = 0;
}

int main(int argc, char const *argv[])
{
	int n = 1;
	cout << "Before reseting:\n" << "n: " << n << endl;
	reset(n);
	cout << "After reseting:\n" << "n: " << n << endl;
	return 0;
}