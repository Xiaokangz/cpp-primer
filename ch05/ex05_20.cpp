#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string temp, prev;
	while (cin >> temp) {
		if (temp == prev) {
			break;
		}
		else { 
			prev = temp;
		}
	}
	if (!temp.empty() && temp == prev) {
		cout << temp << " occurs twice!" << endl;
	} else {
		cout << "No words occcurs more than once" << endl;
	}
	return 0;
}