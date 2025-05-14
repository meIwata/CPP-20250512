#include <iostream>
using namespace std;
int main()
{
	char *p="Hello"; // "Hello"
	cout << "¦r¦ê=" << p << endl;
	cout << "¦r¦ê­Ë¦L=";
	for (int i=4;i>=0;i--) // "olleH"
		cout << *(p+i) ;
	cout << endl;
	system("pause");
	return 0;
}
