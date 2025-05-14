#include <iostream>
#include <string.h>  // 使用c字串函式，必須引入標頭檔  
using namespace std;
// 定義實作函式
void PassWord(char *UserPass)
{
     //字串比較
	int n= strcmp(UserPass,"1234"); // 使用c++ string 可用 UserPass=="1234" 語法 
	if (n==0)
		cout << "歡迎光臨!" << endl;
	else
		cout << "密碼錯誤!" << endl;
}
//主函式 
int main()
{
	char Pass[6]; //c傳統字串 
    cout << "請輸入密碼:";
    cin >> Pass;
    PassWord(Pass); // 呼叫函式
	system("pause");
	return 0;
}
