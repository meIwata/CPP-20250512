#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;	// �إ��ɮ׿�X����	
	string no="C01",item="�i�f�i��";
	//�إ�sample01.txt�ɮסA����g�J�ʧ@
	file.open("out01.txt", ios::out); // ��X
	//�P�_�ɮ׬O�_��}�ҡA�}�Ҧ��\�~�g�J���
	if(file.fail())
           cout << "�ɮ׵L�k�}��!\n";
	else
	{
    	file << "�s��\t�~�W\n";   // �g�J�ɮ�
        file << "A01\t�����G\n";  // �g�J�ɮ�
        file << "B01\t�ʼ֪G\n";  // �g�J�ɮ�
        file << no << "\t" << item << "\n";
        cout << "�ɮ׫إߧ��� !\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
