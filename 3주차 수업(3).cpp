#include <iostream>
using namespace std;
int main()
{
	int x, y, nextx, nexty;
	x = 1;
	y = 1;
	nextx = ++x;
	nexty = y++;
	cout << nextx << endl;
	cout << nexty << endl;
	cout << x << endl;
	cout << y << endl;
	return 0;
}