#include <iostream>
using namespace std;
int main()
{
    int Score[2][3]={ {85,82,90}, {76,95,89} };  //建立二維陣列並初始化
    for(int i=0;i<2;i++)  //外層迴圈，代表學生數 
    {
        for(int j=0; j<3;j++)  //內層迴圈，代表科目數 
            cout << "第" << i+1 << "位學生第" << j+1 << "科成績：" << Score[i][j] << "\n";
    }
    system("pause");
    return 0;
}
