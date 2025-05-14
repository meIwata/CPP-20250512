#include <iostream>
using namespace std;
// 定義實作函式
float Temperature(int value)   
{
	return 1.8 * value +32 ;
}
//主函式 
int main()
{
	cout << "攝氏 10 度轉華氏溫度=" << Temperature(10) << endl; // 呼叫自訂函式
	cout << "---------------------\n";
	int value;
	float result;
    cout << "請輸入攝氏溫度:";
    cin >> value;
    result=Temperature(value); // 呼叫自訂函式，並傳回值給變數 result
	cout << "華氏溫度=" << result << endl;
 	system("pause");
	return 0;
}
