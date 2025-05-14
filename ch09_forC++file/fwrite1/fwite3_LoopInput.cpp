#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	fstream file;	// 建立檔案輸出物件	
	string str;
	//執行寫入動作並將資料附加在檔案結尾
	file.open("sample01.txt", ios::out | ios::app); 
	//判斷檔案是否能開啟，開啟成功才寫入資料
	if(file.fail())
       cout << "檔案無法開啟!\n";
	else
	{
        while(true)
        {
        	cout << "請輸入資料："; 
        	getline(cin,str); //輸入字串 
        	
        	if(str == "exit")
        	{
        		break;
			}
			cout << str << endl; //在螢幕顯示 
			printf("字串長度:%d\n",str.length());
        	file.write(str.c_str(),str.length()); //將 str 寫入檔案
        	file.write("\n",1); //寫出一個換行碼
        	cout << "檔案建立完成 !\n\n";
		}
        cout << "*** 結束檔案建立 ***\n";
    	file.close(); 	//關閉檔案
    }
	system("pause");
	return 0;
}
