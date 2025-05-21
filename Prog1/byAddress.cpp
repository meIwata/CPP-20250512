#include <iostream>
using namespace std;
// 自訂函式宣告
void swap(int *x, int *y);

// Call by address(址)
int main(){
	int a = 10, b = 20;
	printf("a: %3d, b: %3d\n", a, b);
	swap(&a, &b);
	printf("a: %3d, b: %3d\n", a, b);

	system("PAUSE");
	return 0;
}

// 自訂函式實作
void swap(int *x, int *y){  
	int temp = *x;
	*x = *y;
	*y = temp;
}

