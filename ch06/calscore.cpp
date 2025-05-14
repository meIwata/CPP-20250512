#include <iostream>
using namespace std;
int main()
{
    const int person=2;   //人數 
    const int subject=3;  //科目數 
    int Score[person][subject];  //建立二維陣列儲存成績 
    float sum[person], ave[person];  //儲存總分及平均陣列 
    for(int i=0;i<person;i++)  //輸入成績 
    {
        for(int j=0; j<subject;j++)
        { 
            cout << "輸入第" << i+1 << "位學生第" << j+1 << "科成績：";
            cin >> Score[i][j];
        }
    }
    for(int i=0;i<person;i++)  //計算成績 
    {
        sum[i]=0;  //計算前將總分歸零 
        for(int j=0; j<subject;j++)
            sum[i]+=Score[i][j];
        ave[i]=sum[i]/subject;
    }
    for(int i=0;i<person;i++)  //顯示成績 
    {
        cout << "第" << i+1 << "位學生總分：" << sum[i] << " 分，平均：" << ave[i] << " 分\n";
    }
    system("pause");
    return 0;
}
