#include <iostream>
using namespace std;
// 定義實作函式
void ShowNum(int n) // void 代表沒有傳回值
{
	int i = 1;
    while (true) //無限迴圈 
	{
		if (i > n)
			return; // return (跳離開函式區塊，返回main)，break (中斷迴圈)
		cout << i << " ";
		i++;
	}
	cout << "ShowNum 函式...\n"; //觀察此行，是否執行～ 
}
//主函式 
int main()
{
	int n;
	cout << "請輸入數字 n:";
	cin >> n;
	ShowNum(n);
	cout << endl; //換行 
	system("pause");
	return 0;
}
