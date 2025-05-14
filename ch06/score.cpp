#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    const int n = 5;  //學生人數 
    int score[n]; //宣告陣列 
    double sum=0, ave; //sum儲存總分，ave儲存平均 
    for(int i=0; i<n ;i++) //執行n次迴圈 
    {
        cout << "請輸入第 " << i+1 << " 位學生的成績：";
        cin >> score[i]; //等待使用者輸入 
    }
    
	
	for(int i=0; i<n ;i++) //執行五次迴圈 
    {
        sum += score[i]; //計算總分 
    }
    
	ave = sum/n; //計算平均 
    cout << "全班總成績為： " << sum << "分, 平均為 " << ave << "分\n";
    system("pause");
    return 0;
}
