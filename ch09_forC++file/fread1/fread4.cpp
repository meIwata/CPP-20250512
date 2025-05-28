#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;
int main() 
{
    fstream file;  	  //建立檔案輸出、輸入物件	
    
    vector<string> v1;
    
    string str; //C++ 字串 
    int count=0;
    file.open("test03.txt", ios::in); //開啟檔案
    if(file.fail()) //檢查檔案是否成功開啟
         cout << "檔案無法開啟!\n";
    else
    {
        do 
        {

			getline(file,str);
			v1.push_back(str);			
			
            cout << str << "-- C++ --" << str.length() << endl;  
            count++;
        } while(!file.eof());  // 是否至檔案結尾 (end of file)
        file.close(); //關閉檔案
    }
    cout << "count:" << count <<endl; 
    printf("\nVector element list\n");
    for(int i=0; i<v1.size(); i++){
    	printf("%d: %s\n", i+1, v1.at(i).c_str());
	}
    
    system("pause");
    return 0;
} 
