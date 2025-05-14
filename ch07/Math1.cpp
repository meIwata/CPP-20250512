#include "iostream"
#include "math.h"
using namespace std;
#define PI 3.14159      // 圓周率的常數值
#define E 2.718281828   // 自然對數的常數值
int main()
{
	cout << "abs(-87)=" << abs(-87) << endl;      // 87
	cout << "pow(2,3)=" << pow(2,3) << endl;      // 8
	cout << "sqrt(25.0)=" << sqrt(25.0) << endl;  // 5

	cout << "max(2,5)=" << max(2,5) << endl;      // 5
	cout << "min(2,5)=" << min(2,5) << endl;      // 2

	cout << "log10(100)=" << log10(100) << endl;  // 2
	cout << "exp(1)=" << exp(1) << endl;      // 2.71828
	cout << "log(2.718281828)=" <<log(E) << endl; // 1

	double n =asin(0.5);  //n = π/6 = 0.523599
	cout << "asin(0.5)=" << n << endl;    // 0.523599
	cout << "cos(PI/3)=" << cos(PI/3) << endl;    // 0.500001
	system("pause");
	return 0;
}
