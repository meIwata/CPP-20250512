#include <iostream>
using namespace std;
int main()
{
	int *p=new int(1);           // 初始化 *p=1
	cout << "指標 p 的位址 p=" << p << endl; // 顯示指標 p 的位址
	cout << "*p=" << *p << endl;  // *p=1
    *p=2;
	cout << "*p=" << *p << endl;  // *p=2
	delete p; // 釋放配置的記憶體
	system("pause");
	return 0;
}
