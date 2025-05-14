#include <iostream>
using namespace std;
int main()
{
    int deposit=0, c=0, n; //deposit為存款總數，c為計數器，n儲存輸入數字 
    while(deposit<30000) //當存款總額小於30000就執行迴圈內敘述 
    {
        c++;  //計數器加1 
        cout << "請輸入第 " << c << " 個月份的存款：";
        cin >> n; //等待使用者輸入 
        deposit += n; //計算總存款
    }
    cout << "恭喜！存了 " << c << " 個月的總存款為： " << deposit << " 元。\n已足夠購買機車。請小心駕駛！\n";
    system("pause");
    return 0;
}
