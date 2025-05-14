#include <iostream>
using namespace std;
int main()
{
    int f=0, n; //f加糷n纗块计 
    cout << "叫块セ加加糷计";
    cin >> n; //单ㄏノ块 
    cout << "セ加ㄣΤ加糷\n";
    while(f<=n)  
    {
        f++;  //加糷1 
        if(f==4) //狦加糷4碞铬筁ぃ陪ボ 
        {
            continue; 
        } 
        cout << f << " "; //陪ボ加糷 
    }
    cout << "\n";
    system("pause");
    return 0;
}
