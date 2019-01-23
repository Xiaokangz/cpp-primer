#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string temp, prev;
	bool no_twice = true;
	while (cin >> temp) {
		if (isupper(temp[0]) && temp == prev) {
			no_twice = false;
			break;
		}
		else { 
			prev = temp;
		}
	}
	if (!no_twice) {
		cout << temp << " occurs twice!" << endl;
	} else {
		cout << "No words occcurs more than once" << endl;
	}
	return 0;
}