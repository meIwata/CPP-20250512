#include <iostream>
using namespace std;
int main()
{
START: //反覆執行程式開始處 
    int n;
    cout << "請輸入井字三角形的高（大於 9 則結束）："; 
    cin >> n;
    if(n>9) //輸入值大於9就結束
    {
        goto END; //跳到程式結束處 
    }
    for(int i=1; i<=n ;i++) //印出井字三角形
    {
        for(int j=1; j<=i; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    cout << "\n";
    goto START; //跳到程式開始處 
END: //程式結束處 
    system("pause");
    return 0;
}
