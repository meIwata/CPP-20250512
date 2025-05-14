#include "iostream"
using namespace std;

//1.自訂函式宣告(因自訂在主函式下方)
float Temperature(int );
//主函式 
int main()
{
	cout << "攝氏 10 度轉華氏溫度=" << Temperature(10) << endl; //3.呼叫自訂函式
	system("pause");
	return 0;
}

//2.定義實作自訂函式
float Temperature(int value)   
{
	return 1.8 * value +32 ;
}
