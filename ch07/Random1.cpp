#include <iostream>
#include <time.h>  // time(NULL)
#include <stdlib.h> //產生隨機數相關函式 
// 使用 C 的 getch() 必須引用  <conio.h> 標頭檔
#include <conio.h>

using namespace std;
int main()
{
	int seed = time(NULL); // 以系統時間(秒)產生亂數種子值
	srand(seed);   //設定C語言亂數(隨機數)
	int n;
	while(true) //無限迴圈
	{
		cout << "請按任意鍵擲骰子:";
		char ch=getch();  // 僅接受一個字元(字元不顯示出來) 
		if (ch == '\r')   // 按 Enter  結束
		{
			cout << "擲骰子遊戲結束！" << endl;
			break; // 強制中斷迴圈 
		}
		else
		{
			// rand()可產生1~32767的隨機數～ 
			// 透過 下限 + rand() % (上限-下限+1) 產生亂數 1~6
			n = 1 + rand() % (6-1+1);  // 亂數 1~6
			cout <<"你所擲的點數為：" << n << "點" << endl;
		 }
	}
	system("pause");
	return 0;
}
