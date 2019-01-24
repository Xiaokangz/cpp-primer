#include <iostream>
using namespace std;

int fact(int num);
void interact();
int my_abs(int num);

int main(int argc, char const *argv[])
{
	interact();
	return 0;
}

int fact(int num)
{
	if (num == 0) {
		return 1;
	}
	return num * fact(num-1);
}

void interact()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	cout << "The factor of " << num << " is " << fact(num) << endl;
}

int my_abs(int num)
{
	return (num < 0 ? -num : num);
}

