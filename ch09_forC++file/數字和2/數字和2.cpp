#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;   
    char word[100][10];  // 儲存 數字字串，共 100 組，每組 10 個字元 
    char tempword[10];   //  儲存 數字字串
    char ch;  // 讀取一個字元 
    int r=0;  // 儲存 數字總和 
	int pi=0; // pi 記錄每組數字中共有多少個數字 
	int wi=0; // wi 記錄 word[] 陣列的位置
	file1.open("in_a.txt",ios::in);    // 輸入 
	file2.open("out_a.txt", ios::out); // 輸出
    while (! file1.eof())
    {
        pi=0;  //  預設 每組數字個數=0
        do{
              file1.get(ch);  // 讀取一個字元         
              if ( ch>='0' && ch <='9') // 將 數字組合為 tempword 
              {
                  *(tempword+pi)=ch;  
                  pi++;  // pi 記錄每組數字中共有多少個數字字元 
              }
        } while (ch>='0' && ch <='9'); // 遇非數字則往下處理 
        if (pi>0) // 前面的字串是數值 
        {
            *(tempword+pi)='\0';        // 將 數值字串 tempword 加上結束字元 
            strcpy(word[wi],tempword);  // 複製 tempword 數字至 word[wi] 陣列 
            wi++; // wi 記錄 word[] 陣列的位置
        }    
    }
    for (int i=0;i<wi;i++)  // 取出所有的  word[] 字串陣列
    {
       r += atoi(word[i]);  // 求總和，atoi() 將字串轉數值  
       if ( i<wi-1) // 除最後第一組外，每組數字後面必須加「+」
       {
          cout << word[i] << "+";  
          file2 << word[i] << "+";
       }
       else        // 最後一組，僅顯示數值，不顯示「+」
       {
          cout << word[i] ; // 顯示數值 
          file2 << word[i] ;
       }      
    }
    cout << "=" << r << endl;  // 最後一組後面則加上「=」及 「總和」
    file2 << "=" << r << endl;   
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
