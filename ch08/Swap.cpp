#include <iostream>
using namespace std;
void swap(int * ,int *);
int main()
{
	int a=1,b=2;
    cout << "a=" << a << ",b=" << b << endl; // a=1,b=2
    swap(&a,&b);
    cout << "a=" << a << ",b=" << b << endl; // a=2,b=1
	system("pause");
	return 0;
}
void swap(int *x,int *y)
{
    int tmpx,tmpy;
    tmpx=*x;
    tmpy=*y;
    *x=tmpy;
    *y=tmpx;      
}
