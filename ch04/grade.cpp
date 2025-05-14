#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "叫块Θ罿(0-100):";
    cin >>n;
    switch (n/10)  //眔Θ罿计 
    {
    case 10:  //100だ纔单 
    case 9:   //90だ纔单 
        cout << "纔单\n";
        break;
    case 8:   //80だヒ单 
        cout << "ヒ单\n";
        break;
    case 7:   //70だ单
        cout << "单\n";
        break;
    case 6:   //60だ单
        cout << "单\n";
        break;
    default:   //60だ单
        cout << "单\n";
        break;
    }
    system("pause");
    return 0;
}
