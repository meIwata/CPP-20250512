#include <iostream>
using namespace std;
int main()
{
    char password[20];
    cout << "請輸入密碼（可包含空白鍵）："; 
    gets(password);  //取得輸入字串 
    cout << "加密後的密碼：";
    for(int i=0;i<strlen(password);i++)  //逐一處理字元 
    {
        password[i]++;  //將字元碼加1，即A變為B、B變為C、依此類推 
        cout << password[i];
    }
    cout << "\n";
    system("pause");
    return 0;
}
