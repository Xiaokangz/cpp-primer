#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num1, num2;
	while (cin >> num1 >> num2) {
		try {
			if (num2 == 0) {
				throw runtime_error("divide by 0!");
			}
			cout << num1 / num2 << endl;
		} catch (runtime_error err) {
			cout << err.what() << "\nTry again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
		}
	}
	return 0;
}