#include <iostream>
using namespace std;
int main()
{
	int num, thousand, hundred, ten, one;  // num, thousand, hundred, ten, one이 int형임을 정의

	cout << "정수 (1000~9999)를 입력하세요. : " ;  // 네자리수 정수를 입력받기 위함
	cin >> num;  // 네자리수 입력

	thousand = num / 1000;  // 천의 자리 숫자 구하는 법
	hundred = (num - thousand * 1000) / 100;  // 백의 자리 숫자 구하는 법 
	ten = (num - thousand * 1000 - hundred * 100) / 10;  // 십의 자리 숫자 구하는 법
	one = (num - thousand * 1000 - hundred * 100 - ten * 10);  //일의 자리 숫자 구하는 법

	cout << endl;  // 출력창에서 값 입력과 값 출력 사이에 한 줄 띄어있음
	cout << "천의 자리 = " << thousand << endl;  // 천의 자리 숫자 출력
	cout << "백의 자리 = " << hundred << endl;  // 백의 자리 숫자 출력
	cout << "십의 자리 = " << ten << endl;  // 십의 자리 숫자 출력
	cout << "일의 자리 = " << one << endl;  // 일의 자리 숫자 출력

	return 0;
}