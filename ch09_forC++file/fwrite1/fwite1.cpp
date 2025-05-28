#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;	// 建立檔案輸出物件	
	string no="C0001",item="可口可樂";
	//建立sample01.txt檔案，執行寫入動作
	file.open("out01.txt", ios::out); // 輸出
	//判斷檔案是否能開啟，開啟成功才寫入資料
	if(file.fail())
           cout << "檔案無法開啟!\n";
//           cout << "檔案無法開啟!" << endl; // 也可以寫成這樣 
	else
	{
    	file << "編號\t品名\n";   // 寫入檔案
        file << "A0001\t香香果\n";  // 寫入檔案
        file << "B0001\t百樂果\n";  // 寫入檔案
        file << no << "\t" << item << "\n";
        cout << "檔案建立完成 !\n";
    	file.close(); 	//關閉檔案
    }
	system("pause");
	return 0;
}
