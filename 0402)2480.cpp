#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if ((a != b) && (b != c) && (a != c))  // (1), (2)��찡 ��� �ƴѰ�� a,b,c�� ���� ū�ɷ� ���
	{
		if ((a > b) && (a > c)) cout << a * 100 << endl;
		else if ((b > a) && (b > c)) cout << b * 100 << endl;
		else if ((c > a) && (c > b)) cout << c * 100 << endl;
	}
	else if ((a == b) && (a != c)) cout << 1000 + a * 100 << endl;  // (2) �ΰ��� ���� ���
	else if ((a == c) && (a != b)) cout << 1000 + a * 100 << endl;
	else if ((b == c) && (a != b)) cout << 1000 + b * 100 << endl;
	else cout << 10000 + a * 1000 << endl;  // (1) a=b=c�� ���
}