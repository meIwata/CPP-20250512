#include <iostream>
using namespace std;
int main()
{
	int n[]={10, 20, 30, 40};
	cout << "陣列 n 的內容=" << n << endl;            // 0x6ffe10
	cout << "陣列元素n[0] 的位址=" << &n[0] << endl; // 0x6ffe10
	cout << "陣列元素n[1] 的位址=" << &n[1] << endl;  // 0x6ffe14 
	cout << "陣列元素n[2] 的位址=" << &n[2] << endl;  // 0x6ffe18 
	cout << "陣列元素n[3] 的位址=" << &n[3] << endl;  // 0x6ffe1c， + 4 => 9 a b c 
	system("pause");
	return 0;
}
