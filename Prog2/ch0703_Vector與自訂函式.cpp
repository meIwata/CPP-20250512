#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>  //for vector sort 
using namespace std;
//�ŧi�ۭq�禡 
void vectorAdd(vector<int> v1); 

//�D�禡(�{���_�l�I)
int main()
{
	//int  arr[]={28,22,12,44,13};
	//�ŧiint���O��vector(���X�A��Ʈe���A���ץi�ܰ}�C) 
	vector<int> v1;
	//�s�W������vector 
	v1.push_back(12); v1.push_back(5); v1.push_back(89);
	v1.push_back(120); v1.push_back(66); v1.push_back(10);
	
	vectorAdd(v1); //�I�s�ۭq�禡 
	//vector�Ƨ�
	//sort(v1.begin(), v1.end()); //�O�o�n include <algorithm>
	//���vector���� 
	for(int i=0;i<v1.size();i++)
	{
		printf("%d\t",v1.at(i)); //���ovector �C�Ӥ���(index 0 ~ N)  
	}
	printf("\n"); //���� 
	system("pause");
	return 0;
}
//�ۭq�禡 
void vectorAdd(vector<int> v1)
{	
	cout << "�ǤJ��vector����:" << v1.size() << endl; 
	for(int i=0 ; i<v1.size() ; i++)
	{
		v1.at(i) = v1.at(i) + 10; //�����Nvector�C�@����+10 
		printf("%d\t",v1.at(i));
	}
	printf("\n");
	//��@ return vector �@�m�� 
}

