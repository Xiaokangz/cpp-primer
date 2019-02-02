#include <string>
using namespace std;
using arrT = string[10];

string (&fun1(string (&arrStr)[10]))[10];

arrT &fun1(arrT &arrStr);

auto fun1(string (&arrStr)[10]) -> string(&)[10];

string arrS[10];

decltype(arrS) &fun1(string (&arrStr)[10]);

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;
}