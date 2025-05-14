#include <iostream>
using namespace std;
int main()
{
	short a=1;
	int b=1;
	cout << "char 記憶體大小為 " << sizeof(char) << "\n"; 
	cout << "short 記憶體大小為 " << sizeof(short) << "\n"; 
	cout << "int 記憶體大小為 " << sizeof(int) << "\n"; 
	cout << "long 記憶體大小為 " << sizeof(long) << "\n"; 
	cout << "float 記憶體大小為 " << sizeof(float) << "\n"; 
	cout << "double 記憶體大小為 " << sizeof(double) << "\n"; 
	cout << "string 記憶體大小為 " << sizeof(string) << "\n"; 
	cout << "變數 a 記憶體大小為 " << sizeof(a) << "\n"; 
	cout << "運算式 a+b 記憶體大小為 " << sizeof(a+b) << "\n"; 
    system("pause");
    return 0;
}
