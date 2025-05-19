#include <iostream>
using namespace std;
int main()
{
    double m=5;
	int n=10;
	cout << "變數 m 的內容=" << m << endl ;
	cout << "變數 n 的內容=" << n << endl ;
	cout << "變數 m 的記憶體位址=" << &m <<endl;
	cout << "變數 n 的記憶體位址=" << &n <<endl;
	cout << "變數 m 的記憶體大小=" << sizeof(m) << " Bytes" << endl;
	cout << "變數 n 的記憶體大小=" << sizeof(n) << " Bytes" << endl;
	system("pause");
	return 0;
}
