#include <iostream>
using namespace std;


int main(){

	int *p1 = new int; // 宣告一個指標變數 
	*p1 = 10;
	
	printf("指標p1指向記憶體內容: %d\n", *p1); 
	system("PAUSE");
	return 0;
}

