#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;// 建立檔案物件 file1、file2
    bool first=true;    // 作為判斷是否為第一組數值 
    char ch; // 一個字元
    int n;   // 每組的數值 
    int r=0; // r 儲存總和 
    file1.open("in_a.txt",  ios::in);    // file1 作為輸入 
	file2.open("out_a.txt", ios::out);   // file2 作為輸出 
    while (! file1.eof())
    {
        n=0;  
        do {
            file1.get(ch); // 讀取一個字元       
            if ( ch>='0' && ch <='9')
            {
                n*=10; // 組成數值 n
                n = n + (ch - '0'); //ch-'0',字元-'0' = 數值，'0' ascii is 48 
                //printf("n=%d\n",n); //*
        		//system("pause");  //*
            }
            //讀取到213為例 n = n + (ch - '0')
			//2  = 0 + ('2'-'0') 
			//21 = 20 + ('1'-'0')
            //213= 210 + ('3'-'0')
        } while (ch>='0' && ch <='9'); // 讀到非數字則結束
		//n 不為 0 時，作加總與寫入作業  
        if (n!=0)
        {
           r += n;
           if (first) // 如果是第一組數字，前頭不用加 + 號 
               first=false;
           else       // 如果是第二組(含)以上的數字
		   {
			   cout << '+';  // 在數字前加 + 號
			   file2 << '+'; // 寫入檔案 
		   }
		   cout << n ;   // 顯示數字
		   file2 << n;   // 寫入檔案
        }
        //printf("%c\n",ch); //*
        //system("pause");  //*
    }
	cout << "=" << r << endl;  // 顯示總和到console 
	file2 << "=" << r << endl; // 將總和寫入檔案
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
