#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "請輸入要配置的一維陣列大小=";
    cin >> n;             // 輸入一維陣列大小
    int *p=new int[n];    // 建立陣列大小為 n 的動態陣列
    for (int i=0;i<n;i++) // 輸入數值並存在陣列中
    	cin >> *(p+i);   
    	
    cout << "陣列的元素值為" << endl;
    for (int i=0;i<n;i++) // 以指標顯示陣列元素值
    	cout << *(p+i) << endl;  
    	
    delete[] p;  //釋放動態陣列配置的記憶體空間
	system("pause");
	return 0;
}
