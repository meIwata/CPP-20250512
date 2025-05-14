#include <iostream>
using namespace std;
int main()
{
    string pass;  // 儲存輸入密碼
    cout << "請輸入密碼:";
    cin >>pass;
    if (pass == "1234")  //如果密碼正確 
    {
       cout << "歡迎光臨！\n";  //密碼正確 才執行 
    }
    system("pause");
    return 0;
}
