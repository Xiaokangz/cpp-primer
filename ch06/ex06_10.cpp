#include <iostream>
using namespace std;

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main(int argc, char const *argv[])
{
	int m = 3, n = 4;
	cout << "Before swapping:\n" << "m: " << m << " n: " << n << endl;
	swap(&m, &n);
	cout << "After swapping:\n" << "m: " << m << " n: " << n << endl;
	return 0;
}