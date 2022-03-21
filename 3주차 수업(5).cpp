#include <iostream>
using namespace std;
int main()
{
	int x = 10, y = 20;
	bool r1, r2, r3, r4;
	r1 = (x == y);
	r2 = (x != y);
	r3 = (x >= y);
	r4 = (x <= y);

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;
	return 0;
}