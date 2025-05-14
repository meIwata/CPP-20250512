#include <iostream>
using namespace std;
int main()
{
    char op;
    int a=20, b=4;
    cout << "a=20, b=4\n";
    cout << "請輸入要執行的運算(+-*/):";
    cin >>op;
    switch (op)  //取得運算子 
    {
    case '+':   //執行加法運算 
        cout << "a+b = " << a+b <<"\n";
        break;
    case '-':   //執行減法運算 
        cout << "a-b = " << a-b <<"\n";
        break;
    case '*':   //執行乘法運算 
        cout << "a*b = " << a*b <<"\n";
        break;
    case '/':   //執行除法運算 
        cout << "a/b = " << a/b <<"\n";
        break;
    default:   //加減乘除以外的運算
        cout << "無法執行運算！\n";
        break;
    }
    system("pause");
    return 0;
}
