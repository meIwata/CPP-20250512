#include <iostream>
#include <fstream>   
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X�B��J����	
    char ch;
    file.open("sample.txt", ios::in); //�}���ɮ�
    if(file.fail()) //�ˬd�ɮ׬O�_���\�}��
       cout << "�ɮ׵L�k�}��!\n";
    else
    {
        //�]�i�� while(!file.eof()) ���լO�_Ū���ɧ�
		while(file.get(ch)) // �r���v�@Ū���AŪ���ɧ� eof ��j false, �]�i�� !file.eof() 
        {
        	cout << ch;
		}        
        cout << endl;  
        file.close();   //�����ɮ�
    }
    system("pause");
    return 0;
} 
