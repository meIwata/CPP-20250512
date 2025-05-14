#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int *p=&n;
	cout << "變數 n 的值=" << n << endl ;
	cout << "變數 n 的位址=" << &n <<endl;
	cout << "指標 p 的值=" << p <<endl;
	cout << "指標 p 的位址=" << &p <<endl;
	system("pause");
	return 0;
}
