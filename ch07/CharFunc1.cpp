#include <iostream>  // 引入資料輸入、輸出的標頭
using namespace std; // 宣告std 命名空間
int main()
{
	char a[]="First";
	char b[]="Second";
	char c[20];

	// 字串複製 
	cout << "字串 a 的長度=" << strlen(a) << endl;
	// Copy a To c,複製後 c=a="First"
	strcpy(c,a); 
	cout << "c=" << c << endl; // c=First

	//字串比較
	int n= strcmp(a,c); // a==c
	cout << "字串 a==c 比較的結果為:" << n << endl;  // n=0 (a=c)
	cout << "字串 a>b 比較的結果為:" << strcmp(a,b) << endl;  // 傳回 -1 (a<b)

	// 字串相加
	strcat(c,b);
	// c=c+b="First" + "Second"="FirstSecond"
	cout << "字串 c+b =" << c << endl;  // "FirstSecond"
	cout << "字串 c 的長度=" << strlen(c) << endl;  // 11

	system("pause");
	return 0;
}
