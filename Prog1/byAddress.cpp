#include <iostream>
using namespace std;
// �ۭq�禡�ŧi
void swap(int *x, int *y);

// Call by address(�})
int main(){
	int a = 10, b = 20;
	printf("a: %3d, b: %3d\n", a, b);
	swap(&a, &b);
	printf("a: %3d, b: %3d\n", a, b);

	system("PAUSE");
	return 0;
}

// �ۭq�禡��@
void swap(int *x, int *y){  
	int temp = *x;
	*x = *y;
	*y = temp;
}

