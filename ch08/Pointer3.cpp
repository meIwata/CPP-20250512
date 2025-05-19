#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int *p; // 1. 宣告指標變數
	p = &n; // 2. 把n的記憶體位置assign給p 
	cout << "變數 n 的值=" << n << endl ;
	cout << "變數 n 的位址=" << &n <<endl;
	cout << "指標 p 的值=" << p <<endl;
	cout << "指標 p 的位址=" << &p <<endl;
	system("pause");
	return 0;
}
