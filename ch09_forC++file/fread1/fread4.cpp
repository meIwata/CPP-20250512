#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;
int main() 
{
    fstream file;  	  //�إ��ɮ׿�X�B��J����	
    
    vector<string> v1;
    
    string str; //C++ �r�� 
    int count=0;
    file.open("test03.txt", ios::in); //�}���ɮ�
    if(file.fail()) //�ˬd�ɮ׬O�_���\�}��
         cout << "�ɮ׵L�k�}��!\n";
    else
    {
        do 
        {

			getline(file,str);
			v1.push_back(str);			
			
            cout << str << "-- C++ --" << str.length() << endl;  
            count++;
        } while(!file.eof());  // �O�_���ɮ׵��� (end of file)
        file.close(); //�����ɮ�
    }
    cout << "count:" << count <<endl; 
    printf("\nVector element list\n");
    for(int i=0; i<v1.size(); i++){
    	printf("%d: %s\n", i+1, v1.at(i).c_str());
	}
    
    system("pause");
    return 0;
} 
