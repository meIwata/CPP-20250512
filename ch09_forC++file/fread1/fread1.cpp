#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// 建立檔案輸出、輸入物件(也稱IO串流物件，io stream object)
    
    char buffer[300]; //c 字串 
    file.open("sample.txt", ios::in); //開啟檔案
    if(!file.is_open()) //檢查檔案是否成功開啟 true (!true is false)
       cout << "檔案無法開啟!\n";
    else
    {
        file.read(buffer,sizeof(buffer));  //每次讀取 sizeof(buffer) 個字
        cout << buffer << endl;   
        file.close();   //關閉檔案
    }
	
    system("pause");
    return 0;
} 
