#include <iostream>
using namespace std;
int main()
{
    double m=5;
	int n=10;
	cout << "�ܼ� m �����e=" << m << endl ;
	cout << "�ܼ� n �����e=" << n << endl ;
	cout << "�ܼ� m ���O�����}=" << &m <<endl;
	cout << "�ܼ� n ���O�����}=" << &n <<endl;
	cout << "�ܼ� m ���O����j�p=" << sizeof(m) << " Bytes" << endl;
	cout << "�ܼ� n ���O����j�p=" << sizeof(n) << " Bytes" << endl;
	system("pause");
	return 0;
}
