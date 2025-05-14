#include <iostream>
using namespace std;
int main()
{
    int n=10;   // 宣告 n=10
    int *p;     // 宣告指標 p
    p=&n;       // p 指向 n 的位址  
    cout << "n=" << n << endl;     // n=10
    cout << "&n=" << &n << endl;   // &n=0x22ff44 (n 的位址)
    cout << "p=" << p << endl;     //  p=0x22ff44 (p=&n=變數n的位址)
    cout << "*p=" << *p << endl;   // *p=10 (*p=*&n=n=10)
    cout << "*&n=" << *&n << endl; // *&n=10 (*p=*&n=n=10)
	system("pause");
	return 0;
}
