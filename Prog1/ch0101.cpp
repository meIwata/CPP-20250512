#include <iostream>
using namespace std;
int main(){
	int num1, num2, sum; // �i�H�s��ŧi 
	bool isOpen = false;
	printf("��J��Ӿ��: ");
	cin >> num1 >> num2;
	cout << num1 + num2 << endl;
	sum = num1 + num2;
	if(sum>=100){
		printf("sum �j�󵥩�100\n");
	}else{
		printf("sum �p��100\n");
	}
	system("pause");
	return 0;
}
