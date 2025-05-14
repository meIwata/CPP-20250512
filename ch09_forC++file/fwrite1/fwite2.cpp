#include<iostream>
#include<fstream>
#include<string.h>
//#define SIZE 200  
using namespace std;
int main()
{
	fstream file;  // 建立檔案輸出物件	
	string str;    // 宣告c++ 字串物件 

	//若sample01.txt不存在，會建立此檔案，
    //執行寫入動作並將資料附加在檔案結尾

	file.open("sample01.txt", ios::out | ios::app); 
	
	if(file.fail())
       cout << "檔案無法開啟!\n";
	else
	{
        cout << "請輸入資料："; 
        //cin >> str;   //無法輸入含空白字串 
        getline(cin,str);    //用getline()函式，可輸入含空白 c++ 字串 
        cout << str << endl; //顯示在螢幕 
        
		file.write(str.c_str(),str.length()); //將 str 寫入檔案，但要轉成c字串型別 
        file.write("\n",1); //寫出一個換行碼
        
		cout << "資料寫入檔案完成 !\n";
    	file.close(); 	//關閉檔案
    }
	system("pause");
	return 0;
}
