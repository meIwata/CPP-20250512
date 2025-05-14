#include <iostream>
using namespace std;
int main()
{
	int n[3]={1,2,3};
	cout << "陣列 n 的位址=" << n<< endl;            // 0x22ff30
	cout << "陣列元素n[0] 的位址=" << &n[0] << endl; // 0x22ff30
	cout << "陣列元素n[1] 的位址=" << &n[1]<< endl;  // 0x22ff34
	cout << "陣列元素n[2] 的位址=" << &n[2]<< endl;  // 0x22ff38
	system("pause");
	return 0;
}
