#include <iostream>
using namespace std;
void ShowAry(int TempAry[]) // 顯示陣列元素
{
	for(int i=0;i<=2 ;i++) {
		cout << "Ary[" << i << "]=" << TempAry[i] << "\t";
	}
	cout << "TempAry: " << TempAry << endl; 
  	cout << "\n---------------------------------------------" << endl;
}
void Sub2(int TempAry[])   // 傳址呼叫 call by address
 {  
	for(int i=0;i<=2 ;i++) // 陣列元素值 * 2 
	  TempAry[i] *=2; // TempAry[i] = TempAry[i] * 2;
 }
int main()
{
	int Ary[]= {10, 20, 30};
	cout<<"Ary的記憶體位置: "<< Ary << endl;  // 0x6ffe10
	cout<<"Ary[0]的值: "<< Ary[0] << endl; //10 
	cout<<"Ary[0]的記憶體位置: "<< &Ary[0] << endl; // 0x6ffe10
	cout<<"Ary[1]的記憶體位置: "<< &Ary[1] << endl; // 0x6ffe04
	cout<<"Ary[2]的記憶體位置: "<< &Ary[2] << endl; // 0x6ffe08
	/*數字是 4 個byte*/
	
	
	cout << "一.Ary陣列傳址:" << endl;
    ShowAry(Ary);  // 10 20 30
    cout << "二.Ary陣列當參數 傳址後" << endl;
	Sub2(Ary);     // 傳址呼叫
    ShowAry(Ary);  // 20 40 60
	system("pause");
	return 0;
}
