#include <iostream> 
using namespace std;
int add(int x, int y); //宣告自訂義函式 

int main(){
	int a=10,b=20;    
	printf ("add(20,30) = %d\n\n", add(20, 30)); 
	printf ("add(%d, %d) = %d\n\n", a,b,add(a, b));
	printf("輸入兩個整數: ");
	cin >> a >> b;
	
//	printf("add(a, b) = %d\n\n", add(a,b));
	int sum = a + b;
	printf ("add(%d, %d) = %d\n\n", a,b,sum);
	system("PAUSE");
	return 0;
}

int add(int x, int y){
	int temp; // 區域變數 
	return temp = x + y;
}
