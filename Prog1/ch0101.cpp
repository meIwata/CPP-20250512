#include <iostream>
using namespace std;
int main(){
	int num1, num2, sum; // 可以連續宣告 
	bool isOpen = false;
	printf("輸入兩個整數: ");
	cin >> num1 >> num2;
	cout << num1 + num2 << endl;
	sum = num1 + num2;
	if(sum>=100){
		printf("sum 大於等於100\n");
	}else{
		printf("sum 小於100\n");
	}
	system("pause");
	return 0;
}
