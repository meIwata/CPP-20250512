#include <iostream>
using namespace std;
int main()
{
    char s[100];
    cout << "請輸入中英文混合字串："; 
    gets(s); 
    for(int i=0;i<strlen(s);i++)  //逐一處理每個字元 
    {
        if ((int)s[i]<0)  //如果是中文單字 
        {
           cout << s[i] << s[i+1] << "*";  //一次顯示兩個字元 
           i++;  //計數器加1 
        }
        else  //英文字元直接顯示 
           cout << s[i] << "*";
    }
    cout << "\n";
    system("pause");
    return 0;
}
