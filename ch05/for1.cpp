#include <iostream>
using namespace std;
int main()
{
    int sum=0; //sum儲存總和
    for(int i=2; i<=10 ;i+=2) //建立 for 迴圈 
    {
        sum += i; //計算總和 
        cout << "第 " << i/2 << " 次迴圈的 i = " << i << ", 總和為 " << sum << "\n";
    }
    system("pause");
    return 0;
}
