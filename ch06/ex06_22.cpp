#include <iostream>
using namespace std;

void swap(int*& p1, int*& p2);

int main(int argc, char const *argv[])
{
	int i = 42, j = 99;
    auto lft = &i;
    auto rht = &j;
    swap(lft, rht);
    cout << *lft << " " << *rht << endl;	
	return 0;
}

void swap(int*& p1, int*& p2)
{
	auto temp = p1;
	p1 = p2;
	p2 = temp;
}

