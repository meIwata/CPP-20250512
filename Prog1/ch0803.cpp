#include <iostream>
using namespace std;


int main(){

	int *p1 = new int; // �ŧi�@�ӫ����ܼ� 
	*p1 = 10;
	printf("����p1���V�O���餺�e: %d\n", *p1); 
	
	int *p2 = new int(30);
	printf("����p2���V�O���餺�e: %d\n", *p2); 
	
	system("PAUSE");
	return 0;
}

