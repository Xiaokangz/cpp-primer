#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	/* Version 1 */
	for (const auto &a : ia) {
		for (const auto x : a) {
			cout << x << endl;
		}
	}

	/* Version 2 */
	for (size_t i = 0; i < 3; ++i) {
		for (size_t j = 0; j < 4; ++j) {
			cout << ia[i][j] << endl;
		}
	}

	/* Version 3 */
	for (auto p = begin(ia); p != end(ia); ++p) {
		for (auto q = begin(*p); q != end(*p); ++ q) {
			cout << *q << endl;
		}
	}
	return 0;
}