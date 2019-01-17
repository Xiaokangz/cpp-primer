#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string prev, str, dup_str;
	unsigned max_dup = 0, now_dup = 0;
	while (cin >> str) {
		if (now_dup == 0) {
			now_dup = 1;
			max_dup = 1;
			dup_str = str;
			prev = str;
		} else if (prev == str) {
			++now_dup;
			if (now_dup > max_dup) {
				max_dup = now_dup;
				dup_str = str;
			}
		} else {
			now_dup = 1;
			prev = str;
		}
	}
	if (max_dup <= 1) {
		cout << "No word exists continuesly more than once." << endl;
	} else {
		cout << dup_str << ":\t" << max_dup << endl;
	}
	return 0;
}