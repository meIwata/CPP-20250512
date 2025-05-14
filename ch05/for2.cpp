#include <iostream>
using namespace std;
int main()
{
    int sum=0, n; //sum儲存支出總數，n儲存輸入數字 
    for(int i=1; i<=7 ;i++) //執行七次迴圈 
    {
        if(i==7) //如果是第七天就改為星期「日」 
            cout << "請輸入星期日的支出：";
        else
            cout << "請輸入星期 " << i << " 的支出：";
        cin >> n; //等待使用者輸入 
        sum += n; //計算總支出 
    }
    cout << "本星期的支出為： " << sum << " 元\n";
    system("pause");
    return 0;
}
