#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A >> B;
	cin >> C;

	if (B + C >= 60) {  // B + C(분)이 60분을 넘기면 
		if (A + ((B + C) / 60) <= 23) cout << A + ((B + C) / 60) << " " << (B + C) % 60 << endl; // A + a(시간)이 23이하면 출력
		else cout << (A + ((B + C) / 60)) - 24 << " " << (B + C) % 60 << endl;  // // A + a(시간)이 24이상이면 출력
	}
	else if (B + C < 60) cout << A << " " << B + C << endl;  // B + C(분)이 60분보다 작으면 출력
	return 0;
}