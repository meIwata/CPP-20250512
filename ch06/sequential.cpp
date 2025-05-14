#include <iostream>
using namespace std;
int main()
{
   for(;;)
   {
     int num[]={256,731,943,389,142,645,829,945,371,418};
     string name[]={"林小虎","王中森","邵木淼","李大同","陳子孔","鄭美麗","曾溫柔","錢來多","賈天良","吳水品"}; 
     int n=sizeof(num)/sizeof(num[0]); //陣列長度
     int s,i;
     bool Isfound=false;
     cout << "請輸入中獎者的編號：";
     cin >> s;
     for (i=0;i<n;i++)  //逐一比對搜尋 
     {
         if ( num[i]==s)  //號碼相符 
         {
            Isfound=true;
            break;
         }
     }
     if (Isfound==true)
         cout  << "中獎者的姓名為：" << name[i];
     else
         cout << "無此中獎號碼！";
     cout << "（共比對 " << i+1 << " 次）\n\n";
   }
   return 0;
}
