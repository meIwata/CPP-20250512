#include <iostream>
using namespace std;
int main()
{
	char *str1="One";
	char str2[]="Two";
	cout << "以陣列顯示 str1 字串 " <<  endl;  
	for (int i=0;i<3;i++)  // One
		cout << "str1[" << i << "]=" << str1[i] << endl;
	cout << "以指標顯示 str2 陣列 " <<  endl;
	for (int i=0;i<3;i++)  // Two
		cout << "*(str2+" << i << ")=" << *(str2+i) << endl;
	str1=str2;      // 可以改變字串指標 str1 
	// 	str2=str1;  // 這行宣告是錯誤的，str2 不可以改變
	system("pause");
	return 0;
}
