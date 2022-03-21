#include <iostream>
using namespace std;
int main()
{
	int x = 0, y = 0, z = 0;
	cout << (2 > 3 || 6 > 7) << endl;
	cout << (2 || 3 && 3 > 2) << endl;
	cout << (x = y = z = 1) << endl;
	cout << (-++x + y--) << endl;
	cout << x << endl;
	cout << y << endl;
	return 0;
}
