#include <iostream> 
using namespace std;
int add(int x, int y); //�ŧi�ۭq�q�禡 

int main(){
	int a=10,b=20;    
	printf ("add(20,30) = %d\n\n", add(20, 30)); 
	printf ("add(%d, %d) = %d\n\n", a,b,add(a, b));
	system("PAUSE");
	return 0;
}

int add(int x, int y){
	int temp; // �ϰ��ܼ� 
	return temp = x + y;
}
