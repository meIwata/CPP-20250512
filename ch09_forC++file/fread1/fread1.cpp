#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X�B��J����(�]��IO��y����Aio stream object)
    
    char buffer[300]; //c �r�� 
    file.open("sample.txt", ios::in); //�}���ɮ�
    if(!file.is_open()) //�ˬd�ɮ׬O�_���\�}�� true (!true is false)
       cout << "�ɮ׵L�k�}��!\n";
    else
    {
        file.read(buffer,sizeof(buffer));  //�C��Ū�� sizeof(buffer) �Ӧr
        cout << buffer << endl;   
        file.close();   //�����ɮ�
    }
	
    system("pause");
    return 0;
} 
