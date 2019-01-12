#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char cstr1[] = "hello";
	char cstr2[] = "world";
	char total_cstr[strlen(cstr1) + strlen(cstr2) + 2];
	strcpy(total_cstr, cstr1);
	strcat(total_cstr, " ");
	strcat(total_cstr, cstr2);
	cout << total_cstr << endl;
	return 0;
}