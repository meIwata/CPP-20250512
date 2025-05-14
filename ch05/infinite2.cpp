#include <iostream>
using namespace std;
int main()
{
    int i=1; 
    for(;;) //建立無窮迴圈 
    {
        cout << "第 " << i << " 次執行迴圈\n";
        i++;
        if(i>1000)
        {
            break;
        }
    }
    system("pause");
    return 0;
}
