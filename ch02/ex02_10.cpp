#include <iostream>
#include <string>

using namespace std;

string global_str;
int global_int;
int main(int argc, char const *argv[])
{
	int local_int;
	string local_str;

	cout << global_str << " " << global_int << endl;
	cout << local_str << " " << local_int;
 	return 0;
}