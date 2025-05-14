#include <iostream>  // 引入資料輸入、輸出的標頭
using namespace std; // 宣告std 命名空間
int main()
{
	int n[3]={1,2,3};
	cout << "陣列元素\t位     址\t值\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<3;i++)
		cout << "n[" << i << "]\t\t" << &n[i] << "\t" << n[i] << endl;
	// 以指標
	cout << "\n陣列指標\t位     址\t值\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<3;i++)
		cout << "n+" << i << "\t\t" << n+i << "\t" << *(n+i) << endl;

	system("pause");
	return 0;
}
