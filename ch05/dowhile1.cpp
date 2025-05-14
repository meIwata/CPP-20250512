#include <iostream>
using namespace std;
int main()
{
    string pw; //儲存使用者輸入的密碼  
    do //建立 do…while 迴圈 
    {
        cout << "請輸入密碼：";
        cin >> pw; //等待使用者輸入 
    }while(pw!="1234"); //如果密碼不正確 
    cout << "恭喜！密碼正確！\n";
    system("pause");
    return 0;
}
