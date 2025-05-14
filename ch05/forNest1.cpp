#include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5 ;i++) //外部迴圈，共執行5次 
    {
        cout << "外部第 " << i << " 次迴圈, " << "內部執行 " << i << " 次迴圈： ";
        for(int j=1; j<=i; j++) //內部迴圈 
        {
            cout << "#";
        }
        cout << "\n"; //換行 
    }
    system("pause");
    return 0;
}
