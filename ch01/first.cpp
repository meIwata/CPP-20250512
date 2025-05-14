/*
  多行註解 Hello Everyone let's go learning C\C++ program 
*/
#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，有些編譯器會自動加入 。這是源自於C 
using namespace std;//C++命名空間 
//主函式(main function) 
int main()
{
    //使用c++內定物件cout 輸出資料, endl物件是換行作用 
	cout << "小明的座號為 " << 23 << " 號" << endl;
    cout << "小英的座號為 " << 30 << " 號" << endl;
    cout << "廖卿如的座號為" << 15 << " 號" << endl; 
    
	system("pause");//呼叫內定函式 
    return 0; //返回並傳回0 
}
