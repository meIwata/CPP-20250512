#include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=9 ;i++) //外部迴圈，執行9次 
    {
        for(int j=1; j<=9; j++) //內部迴圈，執行9次 
        {
            cout << i << "*" << j << "=" << i*j << "\t";
        }
        cout << "\n"; //每一次執行外部迴圈就換行 
    }
    system("pause");
    return 0;
}
