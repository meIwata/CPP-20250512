#include<iostream>
#include<fstream>
#include<string.h>
//#define SIZE 200  
using namespace std;
int main()
{
	fstream file;  // �إ��ɮ׿�X����	
	string str;    // �ŧic++ �r�ꪫ�� 

	//�Ysample01.txt���s�b�A�|�إߦ��ɮסA
    //����g�J�ʧ@�ñN��ƪ��[�b�ɮ׵���

	file.open("sample01.txt", ios::out | ios::app); 
	
	if(file.fail())
       cout << "�ɮ׵L�k�}��!\n";
	else
	{
        cout << "�п�J��ơG"; 
        //cin >> str;   //�L�k��J�t�ťզr�� 
        getline(cin,str);    //��getline()�禡�A�i��J�t�ť� c++ �r�� 
        cout << str << endl; //��ܦb�ù� 
        
		file.write(str.c_str(),str.length()); //�N str �g�J�ɮסA���n�নc�r�ꫬ�O 
        file.write("\n",1); //�g�X�@�Ӵ���X
        
		cout << "��Ƽg�J�ɮק��� !\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
