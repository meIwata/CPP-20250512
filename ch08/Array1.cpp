#include <iostream>
using namespace std;
// 加入函式原型宣告
void Sub1(int a,int & );
int main()
{
 	int Ary[]= {1, 2, 3}; // 1 2 3
    cout << "Ary陣列元素 Ary[0]傳值、 Ary[1]傳址後" << endl;
	Sub1(Ary[0],Ary[1]);  // Ary[0]傳值、 Ary[1]傳參考
    for (int i=0;i<3;i++)
        cout << Ary[i] << " ";  // 1 5 3 
    cout << endl;
	system("pause");
	return 0;
}
void Sub1(int a,int &b ) // 傳值呼叫，傳參考呼叫
{  
      a=5;  // 改變陣列元素值
      b=5;
}     
