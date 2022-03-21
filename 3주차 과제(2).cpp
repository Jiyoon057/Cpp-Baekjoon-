#include <iostream>
using namespace std;
int main()
{
	int x = 1, y = 1, z = 1;
	int k = (5 > 2) ? 5 : 2;  // (5>2)가 참이면 5출력, 거짓이면 2출력
	cout << ++x << " " << y++ << " " << ++z + 1 << endl;  // ++x = 2, y++ = 1, ++z = 2
	cout << x++ << " " << y++ + 1 << " " << --z << endl;  // x++ = 2, y++ = 2, --z = 1
	cout << x << " " << y << " " << z << endl;  // x = 3, y = 3, z = 1
	cout << k << endl;  // 6줄에서 (5>2)가 참이므로 5출력
	return 0;
}