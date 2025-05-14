#include <iostream>
using namespace std;
int main()
{
    int n[]={1,3,5,7,9};  //建立5個元素的陣列 
    int a=sizeof(n);      //取得陣列記憶體大小 
    int b=sizeof(n[0]);   //取得陣列元素記憶體大小 
    int c=a/b;            //計算陣列元素個數 
    cout << "陣列總記憶體空間的大小：" << a << " Bytes\n";
    cout << "每個陣列元素記憶體空間的大小："<< b << " Bytes\n";
    cout << "陣列元素個數：" << c << "\n\n";
    cout << "使用for 迴圈顯示陣列\n";
    for (int i=0;i<c;i++)
        cout << "n[" << i << "]=" << n[i] << "\n";
    system("pause");
    return 0;
}
