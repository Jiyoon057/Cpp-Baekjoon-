#include <iostream>
using namespace std;
int main()
{
	int num, thousand, hundred, ten, one;  // num, thousand, hundred, ten, one�� int������ ����

	cout << "���� (1000~9999)�� �Է��ϼ���. : " ;  // ���ڸ��� ������ �Է¹ޱ� ����
	cin >> num;  // ���ڸ��� �Է�

	thousand = num / 1000;  // õ�� �ڸ� ���� ���ϴ� ��
	hundred = (num - thousand * 1000) / 100;  // ���� �ڸ� ���� ���ϴ� �� 
	ten = (num - thousand * 1000 - hundred * 100) / 10;  // ���� �ڸ� ���� ���ϴ� ��
	one = (num - thousand * 1000 - hundred * 100 - ten * 10);  //���� �ڸ� ���� ���ϴ� ��

	cout << endl;  // ���â���� �� �Է°� �� ��� ���̿� �� �� �������
	cout << "õ�� �ڸ� = " << thousand << endl;  // õ�� �ڸ� ���� ���
	cout << "���� �ڸ� = " << hundred << endl;  // ���� �ڸ� ���� ���
	cout << "���� �ڸ� = " << ten << endl;  // ���� �ڸ� ���� ���
	cout << "���� �ڸ� = " << one << endl;  // ���� �ڸ� ���� ���

	return 0;
}