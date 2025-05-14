#include <iostream>
using namespace std;
int main()
{
    int i; 
    for(i=2; i<=6 ;i+=2) //for迴圈中設定i的起始值為2
    {
        cout <<  i << " ";
    }
    cout <<  "\n";
    cout << "結束迴圈後的 i 值為 " << i << " \n";
    //system("pause");
    return 0;
}
