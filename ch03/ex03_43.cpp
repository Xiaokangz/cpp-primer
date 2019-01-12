#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	/* Version 1 */
	for (const int (&a)[4] : ia) {
		for (const int x : a) {
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
	for (int (*p)[4] = begin(ia); p != end(ia); ++p) {
		for (int *q = begin(*p); q != end(*p); ++ q) {
			cout << *q << endl;
		}
	}
	return 0;
}