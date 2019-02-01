#include <iostream>
using namespace std;

int larger(const int&, const int* const);

int main(int argc, char const *argv[])
{
	int i = 10;
	cout << "larger of " << i << " and 5 is " << larger(5, &i) << endl; 
	return 0;
}

int larger(const int &i, const int* const p)
{
	return (i > *p) ? i : (*p);
}