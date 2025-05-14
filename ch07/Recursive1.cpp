#include <iostream>
using namespace std;
// 定義實作函式
double Factorial(double n) 
{
	if (n == 0) //當n=0，傳回值 1，並結束遞迴呼叫
		return 1; //跳離開函式 
	else
	{
		cout << "n = " << n << endl; 
		return n * Factorial(n - 1); //遞迴呼叫(呼叫自已)
	}
		
}
//主函式 
int main()
{
	double n,Total;
	cout << "請輸入數字 n:";
	cin >> n;
	Total = Factorial(n); // 求 n!(乘階)
	cout << n << "!=" << Total << endl;
	system("pause");
	return 0;
}
