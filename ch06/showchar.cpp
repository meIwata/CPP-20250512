#include <iostream>
using namespace std;
int main()
{
    char name[][9]={"林火聰","陳祥","歐陽忠明"};
    int sizeTotal=sizeof(name);  //取得記憶體總量
    int sizeRow=sizeof(name[0]); //取得字串所佔記憶體
    int n=sizeTotal/sizeRow;     //計算字串個數 
    for (int i=0;i<n;i++) 
        cout << "第 " << i+1 << " 個學生姓名：" << name[i] << "\n";
    system("pause");
    return 0;
}
