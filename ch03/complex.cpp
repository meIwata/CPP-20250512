#include <iostream>
using namespace std;
int main()
{
    float result, n;   
    cout << "請輸入任意數：";
    cin >> n;
    result = n;   //將輸入設定給result變數 
    result *= n;  //result變數再乘以n就是平方 
    cout << "此數的平方為：" << result << "\n";
    result *= n;  //平方值再乘以n就是立方 
    cout << "此數的立方為：" << result << "\n";
    system("pause");
    return 0;
}
