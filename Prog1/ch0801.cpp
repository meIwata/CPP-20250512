#include <iostream>
using namespace std;


int main(){

char ch = 'A';
char *ptr; // 1. 宣告指標變數 
ptr = &ch; // 2. ptr 指向 ch 的位址  
printf(" ptr 指向的變數內容%c \n", *ptr);
printf(" ptr 指標本身的內容0x%x \n",  ptr); // %x 16進位表示 
printf(" ptr 指標本身的內容%d \n",  ptr); // %x 10進位表示 



*ptr = 'K';
printf("ch=%c\n", ch); // K

*ptr = *ptr + 1;
 printf("ch=%c\n", ch); // L
 
	system("PAUSE");
	return 0;
}

