#include <iostream>
#include <time.h>  // time(NULL)
#include <stdlib.h> //�����H���Ƭ����禡 
// �ϥ� C �� getch() �����ޥ�  <conio.h> ���Y��
#include <conio.h>

using namespace std;
int main()
{
	int seed = time(NULL); // �H�t�ήɶ�(��)���Ͷüƺؤl��
	srand(seed);   //�]�wC�y���ü�(�H����)
	int n;
	while(true) //�L���j��
	{
		cout << "�Ы����N���Y��l:";
		char ch=getch();  // �ȱ����@�Ӧr��(�r������ܥX��) 
		if (ch == '\r')   // �� Enter  ����
		{
			cout << "�Y��l�C�������I" << endl;
			break; // �j��_�j�� 
		}
		else
		{
			// rand()�i����1~32767���H���ơ� 
			// �z�L �U�� + rand() % (�W��-�U��+1) ���Ͷü� 1~6
			n = 1 + rand() % (6-1+1);  // �ü� 1~6
			cout <<"�A���Y���I�Ƭ��G" << n << "�I" << endl;
		 }
	}
	system("pause");
	return 0;
}
