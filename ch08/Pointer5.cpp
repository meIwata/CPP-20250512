#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int *p=&n;
	cout << "變數 n 的值=" << n << endl ;  // 10
	cout << "指標 p 的記憶體內容=" << *p << endl;  // 10
	//
	*p=20; // 改變 p 的值為 20
	cout << "改變後變數 n 的值=" << n << endl;  // 20
	cout << "改變後指標 p 的記憶體內容=" << *p << endl; // 20
	system("pause");
	return 0;
}
