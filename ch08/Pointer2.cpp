#include <iostream>
using namespace std;
int main()
{
	int n[]={10, 20, 30, 40};
	cout << "�}�C n �����e=" << n << endl;            // 0x6ffe10
	cout << "�}�C����n[0] ����}=" << &n[0] << endl; // 0x6ffe10
	cout << "�}�C����n[1] ����}=" << &n[1] << endl;  // 0x6ffe14 
	cout << "�}�C����n[2] ����}=" << &n[2] << endl;  // 0x6ffe18 
	cout << "�}�C����n[3] ����}=" << &n[3] << endl;  // 0x6ffe1c�A + 4 => 9 a b c 
	system("pause");
	return 0;
}
