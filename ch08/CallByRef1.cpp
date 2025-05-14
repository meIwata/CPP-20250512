#include <iostream>
using namespace std;
// 加入函式原型宣告
int Turbo(int &);
int main()
{
	int Speed,NewSpeed;
    cout << "請輸入初始速度:";
    cin >> Speed;
    NewSpeed=Turbo(Speed); // 加速
	cout << "加速後速度:" << NewSpeed << endl;
	cout << "原初始速度:" << Speed << endl;
	system("pause");
	return 0;
}
int Turbo(int &MySpeed)  // 加速 10
{
	cout << "加速前速度:" << MySpeed << endl;
	MySpeed+=10;
	return MySpeed;  
}
