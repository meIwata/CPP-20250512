#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;// �إ��ɮת��� file1�Bfile2
    bool first=true;    // �@���P�_�O�_���Ĥ@�ռƭ� 
    char ch; // �@�Ӧr��
    int n;   // �C�ժ��ƭ� 
    int r=0; // r �x�s�`�M 
    file1.open("in_a.txt",  ios::in);    // file1 �@����J 
	file2.open("out_a.txt", ios::out);   // file2 �@����X 
    while (! file1.eof())
    {
        n=0;  
        do {
            file1.get(ch); // Ū���@�Ӧr��       
            if ( ch>='0' && ch <='9')
            {
                n*=10; // �զ��ƭ� n
                n = n + (ch - '0'); //ch-'0',�r��-'0' = �ƭȡA'0' ascii is 48 
                //printf("n=%d\n",n); //*
        		//system("pause");  //*
            }
            //Ū����213���� n = n + (ch - '0')
			//2  = 0 + ('2'-'0') 
			//21 = 20 + ('1'-'0')
            //213= 210 + ('3'-'0')
        } while (ch>='0' && ch <='9'); // Ū��D�Ʀr�h����
		//n ���� 0 �ɡA�@�[�`�P�g�J�@�~  
        if (n!=0)
        {
           r += n;
           if (first) // �p�G�O�Ĥ@�ռƦr�A�e�Y���Υ[ + �� 
               first=false;
           else       // �p�G�O�ĤG��(�t)�H�W���Ʀr
		   {
			   cout << '+';  // �b�Ʀr�e�[ + ��
			   file2 << '+'; // �g�J�ɮ� 
		   }
		   cout << n ;   // ��ܼƦr
		   file2 << n;   // �g�J�ɮ�
        }
        //printf("%c\n",ch); //*
        //system("pause");  //*
    }
	cout << "=" << r << endl;  // ����`�M��console 
	file2 << "=" << r << endl; // �N�`�M�g�J�ɮ�
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
