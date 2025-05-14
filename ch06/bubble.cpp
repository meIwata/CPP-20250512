#include <iostream>
using namespace std;
int main()
{
    int n;  //要排序的數值個數 
    cout << "請輸入要排序的數值個數：";
    cin >> n; 
    float array[n], tem; //宣告陣列及交換暫存變數 
    for(int i=0; i<n ;i++) 
    {
        cout << "請輸入第 " << i+1 << " 個數值：";
        cin >> array[i];  
    }
    cout << "排序前：\n";
    for (int i=0;i<n;i++)  //顯示排序前的原始數值序列 
        cout << array[i] << " ";
    for (int i=0;i<n-1;i++)  // 陣列排序
    {
        for (int j=i+1;j<n;j++)
        {
            if (array[i]>array[j])
            {
               tem=array[i];  // 交換
               array[i]=array[j];
               array[j]=tem;
             }
        }
    }
    cout << "\n由小到大排序後：\n";
    for (int i=0;i<n;i++)  //顯示排序後的數值序列 
        cout <<  array[i] << " ";
    cout << "\n";
    system("pause");
    return 0;
}
