#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main() 
{
    fstream file;  	  //�إ��ɮ׿�X�B��J����	
    char buffer[100]; //C�ǲΦr��
    string str; //C++ �r�� 
    int count=0;
    file.open("test03.txt", ios::in); //�}���ɮ�
    if(file.fail()) //�ˬd�ɮ׬O�_���\�}��
         cout << "�ɮ׵L�k�}��!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // �C��Ū���@��
            cout << buffer << "-- C --" << strlen(buffer) << endl;
            str = buffer; //c�ǲΦr�� �ন c++ �r�ꪫ�� 
            cout << str << "-- C++ --" << str.length() << endl;  
            count++;
        } while(!file.eof());  // �O�_���ɮ׵��� (end of file)
        file.close(); //�����ɮ�
    }
    cout << "count:" << count <<endl; 
    system("pause");
    return 0;
} 
