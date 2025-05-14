#include <iostream>
using namespace std;
void ShowAry(int TempAry[]) // 顯示陣列元素
{
	for(int i=0;i<=2 ;i++) 
	  cout << "Ary[" << i << "]=" << TempAry[i] << "\t";
  	cout << "\n---------------------------------------------" << endl;
}
void Sub2(int TempAry[])   // 傳址呼叫 call by address
 {  
	for(int i=0;i<=2 ;i++) // 陣列元素值 * 2 
	  TempAry[i] *=2;
 }
int main()
{
	int Ary[]= {10, 20, 30};
	cout << "一.Ary陣列傳址:" << endl;
    ShowAry(Ary);  // 10 20 30
    cout << "二.Ary陣列當參數 傳址後" << endl;
	Sub2(Ary);     // 傳址呼叫
    ShowAry(Ary);  // 20 40 60
	system("pause");
	return 0;
}
