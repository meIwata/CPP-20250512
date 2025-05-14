#include <iostream>
using namespace std;
int Add(int a, int b) // 數值相加
{	return a + b;  }
string Add(string a, string b) // 字串相加
{	return a + b;  }

int main()
{
	cout << "Add(2,3)=" << Add(2, 3) << endl;
	cout << "-------------------------\n";
	cout << "Add(\"Nice\",\"Play\") = " << Add("Nice", "Play") << endl;
	system("pause");
	return 0;
}
