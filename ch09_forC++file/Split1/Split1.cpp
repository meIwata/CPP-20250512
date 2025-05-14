#include <iostream> 
#include <fstream> 
using namespace std; 
int main()
{
    fstream file;       // 建立檔案輸出、輸入物件 
	char word[100][20]; // 可儲存 100 個字語，每個字語最多可存 20 個字元 
	char buffer[80];    // 每一行文字長度 
    char *s;      // 暫存字串分解後的字語
    int count=0;  // 共有多少個字串(字語)
    file.open("in_a.txt",ios::in);
    // in_a.txt 文字內容 
    // One Two Three
    // Four Five Six
    while (! file.eof())  
    {  // 每次讀取一行至 buffer 陣列 
        file.getline(buffer,sizeof(buffer)); 
        s = strtok(buffer," "); // 以空白字元將字串分解為字語 
        strcpy(word[count],s);  // 將第一個字語儲存至  word[] 陣列 
        count++;
        while(s!= NULL )
        { 
            s = strtok(NULL, " "); // 繼續分解其他字串為字語
    		if (s!= NULL)
    		{
    		   strcpy(word[count],s); // 將其餘的字語儲存至  word[] 陣列  
    		   count++; 
    		}
        }   
    }
    cout << "共有 " << count << " 個字語" << endl;
    for (int i=0;i<count;i++)  // 顯示所有分解的字語
        cout << word[i] << " " ;
    cout << endl;
    system("pause");
    return 0;
}
