#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "請輸入被除數(整數)：";
    cin >> a; 
    cout << "請輸入除數(整數，不能為0)：";
    cin >> b; 
    cout << "商：" << a/b << "，餘數：" << a%b << "\n";
    system("pause");
    return 0;
}
