#include <iostream>
using namespace std;
int main()
{
	float int1, int2, int3, max;  //max儲存最大數 
    cout << "請輸入第一個數：";
    cin >> int1;
    cout << "請輸入第二個數：";
    cin >> int2;
    max = int1>int2 ? int1 : int2; //根據輸入的數找出大數 
    cout << "請輸入第三個數：";
    cin >> int3;
    max = max>int3 ? max : int3; //根據輸入的數找出大數 
    cout << "輸入三個數中最大的數為：" << max << "\n"; //顯示結果
    system("pause");
    return 0;
}
