#include <iostream>
using namespace std;
// 加入函式原型宣告
void ShowAry(int *);
void Sub2(int *);
int main()
{
	int Ary[]= {1, 2, 3};
	cout << "一.Ary陣列傳址:" << endl;
    ShowAry(Ary);  // 1 2 3
    cout << "二.Ary陣列當參數 傳址後" << endl;
	Sub2(Ary);     // 傳址呼叫
    ShowAry(Ary);  // 2 4 6
	system("pause");
	return 0;
}
void ShowAry(int *TempAry) // 顯示陣列元素
{
	for(int i=0;i<=2 ;i++) 
	  cout << "Ary[" << i << "]=" << TempAry[i] << "\t";
  	cout << "\n---------------------------------------------" << endl;
}
void Sub2(int TempAry[])   // 傳址呼叫
 {  
	for(int i=0;i<=2 ;i++) // 陣列元素值 * 2 
	  TempAry[i] *=2;
 }
