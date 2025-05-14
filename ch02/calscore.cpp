#include <iostream>
using namespace std;
int main()
{
    short nat, eng, math;  //宣告儲存成績的變數 
    cout << "請輸入國文成績(0-100)："; //輸入國文成績 
    cin >> nat;
    cout << "請輸入英文成績(0-100)："; //輸入英文成績 
    cin >> eng;
    cout << "請輸入數學成績(0-100)："; //輸入數學成績 
    cin >> math;
    int sum = nat + eng + math;  //計算總分 
    float ave = (float)sum / 3;  //計算平均 
    cout << "您的總分為 " << sum << " 分，平均為 " << ave << " 分\n";
    system("pause");
    return 0;
}
