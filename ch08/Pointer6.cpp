#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int m=20;
	int *p;
	p=&n;
	cout << "變數 n 的值=" << n << endl ; // n=10
	cout << "指標 p 指向的記憶體位址=" << p <<endl;  // p=0x22ff44
	cout << "*p 的值=" << *p <<endl;     // *p=10
	cout << "----------------------" << endl;
	p=&m;
	cout << "變數 m 的值=" << m << endl ; // m=20
	cout << "指標 p 指向的記憶體位址=" << p <<endl;   // p=0x22ff40
	cout << "*p 的值=" << *p <<endl;      // *p=20
	system("pause");
	return 0;
}
