#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num1, num2;
	cin >> num1 >> num2;
	if (num2 == 0) {
		throw runtime_error("divide by 0!");
	}
	cout <<  num1 / num2 << endl;
	return 0;
}