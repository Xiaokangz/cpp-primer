#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> il)
{
	int sum = 0;
	for (auto &i : il) {
		sum += i;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	cout << "the sum is: " << sum({1, 2, 3 , 4}) << endl;
	return 0;
}