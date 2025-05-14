#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main() 
{
    fstream file;  	  //建立檔案輸出、輸入物件	
    char buffer[100]; //C傳統字串
    string str; //C++ 字串 
    int count=0;
    file.open("test03.txt", ios::in); //開啟檔案
    if(file.fail()) //檢查檔案是否成功開啟
         cout << "檔案無法開啟!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // 每次讀取一行
            cout << buffer << "-- C --" << strlen(buffer) << endl;
            str = buffer; //c傳統字串 轉成 c++ 字串物件 
            cout << str << "-- C++ --" << str.length() << endl;  
            count++;
        } while(!file.eof());  // 是否至檔案結尾 (end of file)
        file.close(); //關閉檔案
    }
    cout << "count:" << count <<endl; 
    system("pause");
    return 0;
} 
