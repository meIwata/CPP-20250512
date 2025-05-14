#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	if (argc>2 )
	{
		cout << "total argument= " << argc << endl;
		for (int i=0;i<argc;i++)
			cout << "argv[" << i << "]=" << argv[i] << endl;

		int a=atoi(argv[1]); // ﹃锣计 
		int b=atoi(argv[2]);
		int r=a+b;
		cout << a << " + " << b << " = " << r << endl;
	}
	else 
	{
		cout << "叫 Command 家Α 祘Α嘿 把计1 把计2  Α磅︽\n";
		cout << "ㄒmain_arg 12 34 [Enter]      \n\n";
	}
	system("pause");
	return 0;
}
