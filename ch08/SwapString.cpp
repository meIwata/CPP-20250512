#include <iostream>
using namespace std;
int main()
{
	char *p1="String1"; 
    char *p2="String2"; 
	cout << "p1=" << p1 << endl; // "String1"
	cout << "p2=" << p2 << endl; // "String2"
	
	char *tmp;
	tmp=p1;
	p1=p2;
    p2=tmp;
    
    cout << "¦r¦ê¥æ´««á" << endl;
	cout << "p1=" << p1 << endl; // "String2"
	cout << "p2=" << p2 << endl; // "String1"
	system("pause");
	return 0;
}
