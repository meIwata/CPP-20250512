#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;	// �إ��ɮ׿�X����	
	string no="C0001",item="�i�f�i��";
	//�إ�sample01.txt�ɮסA����g�J�ʧ@
	file.open("out01.txt", ios::out); // ��X
	//�P�_�ɮ׬O�_��}�ҡA�}�Ҧ��\�~�g�J���
	if(file.fail())
           cout << "�ɮ׵L�k�}��!\n";
//           cout << "�ɮ׵L�k�}��!" << endl; // �]�i�H�g���o�� 
	else
	{
    	file << "�s��\t�~�W\n";   // �g�J�ɮ�
        file << "A0001\t�����G\n";  // �g�J�ɮ�
        file << "B0001\t�ʼ֪G\n";  // �g�J�ɮ�
        file << no << "\t" << item << "\n";
        cout << "�ɮ׫إߧ��� !\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
