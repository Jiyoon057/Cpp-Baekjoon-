#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A >> B;
	cin >> C;

	if (B + C >= 60) {  // B + C(��)�� 60���� �ѱ�� 
		if (A + ((B + C) / 60) <= 23) cout << A + ((B + C) / 60) << " " << (B + C) % 60 << endl; // A + a(�ð�)�� 23���ϸ� ���
		else cout << (A + ((B + C) / 60)) - 24 << " " << (B + C) % 60 << endl;  // // A + a(�ð�)�� 24�̻��̸� ���
	}
	else if (B + C < 60) cout << A << " " << B + C << endl;  // B + C(��)�� 60�к��� ������ ���
	return 0;
}