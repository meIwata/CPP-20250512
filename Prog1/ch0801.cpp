#include <iostream>
using namespace std;


int main(){

char ch = 'A';
char *ptr; // 1. �ŧi�����ܼ� 
ptr = &ch; // 2. ptr ���V ch ����}  
printf(" ptr ���V���ܼƤ��e%c \n", *ptr);
printf(" ptr ���Х��������e0x%x \n",  ptr); // %x 16�i���� 
printf(" ptr ���Х��������e%d \n",  ptr); // %x 10�i���� 



*ptr = 'K';
printf("ch=%c\n", ch); // K

*ptr = *ptr + 1;
 printf("ch=%c\n", ch); // L
 
	system("PAUSE");
	return 0;
}

