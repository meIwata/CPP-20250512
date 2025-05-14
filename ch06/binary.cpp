#include <iostream>
using namespace std;
int main()
{
     int num[]={256,731,943,389,142,645,829,945,371,418};
     string name[]={"林小虎","王中森","邵木淼","李大同","陳子孔","鄭美麗","曾溫柔","錢來多","賈天良","吳水品"}; 
     int n=sizeof(num)/sizeof(num[0]); //陣列長度
     int s,i,j,c,min,max,mid;
     bool Isfound;
     int temint;
     string temstr; 
     for (i=0;i<n-1;i++)  // 陣列排序
     {
        for (j=i+1;j<n;j++)
        {
            if (num[i]>num[j])
            {
               temint=num[i];  // 交換編號 
               num[i]=num[j];
               num[j]=temint;
               temstr=name[i];  // 交換姓名 
               name[i]=name[j];
               name[j]=temstr;
             }
        }
     }
     cout << "排序後的編號：\n";
     for (i=0;i<n;i++)
     {
         cout << num[i] << " ";
     }
     cout << "\n";
   for(;;)
   {
     Isfound=false;
     min=0;
     max=n-1;
     c=1;
     cout << "請輸入中獎者的編號：";
     cin >> s;
     while (min<=max)
     {
        
		mid=(min+max)/2;
		printf("mid=%d\n",mid);
        if ( num[mid]==s)  //號碼相符 
        {
           Isfound=true;
           break;
        }
        c++;  //計算比對次數 
        if (num[mid]>s)  //如果中間值大於輸入值 
           max=mid-1;    //使用較小的一半區域繼續比對 
        else             //如果中間值不大於輸入值 
           min=mid+1;    //使用較大的一半區域繼續比對 
     }
     if (Isfound==true)
         cout  << "中獎者的姓名為：" << name[mid];
     else
         cout << "無此中獎號碼！";
     cout << "（共比對 " << c << " 次）\n\n";
   }
   return 0;
}
