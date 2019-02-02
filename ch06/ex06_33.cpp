#include <iostream>
#include <vector>
using namespace std;
using Iter = vector<int>::const_iterator; 

void printVec(Iter first, Iter last)
{
	if (first == last) {
		return;
	}
	cout << *first << endl;
	printVec(first + 1, last);
}

int main(int argc, char const *argv[])
{
	vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printVec(ivec.cbegin(), ivec.cend());
	return 0;
}