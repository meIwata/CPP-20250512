#include <iostream>
#include <stdlib.h>
using namespace std;
//�ۭq���c���OStudent 
struct Student
{
	//field(������)
	string id; 
	string name;
	int score;
	//function
	void go()
	{
		printf("go go go......\n");
	}
	void eat(string food){
		cout << "�Y" << food << endl;
	}
};
//���c���O�O���Oclass���e�@ 
int main()
{
  	//�ŧi���c�ܼ�David,�ó]�w��l�� 
	struct Student David = {"FO-1001","�j�ä�",92};
	cout << "�Ǹ�:" << David.id << endl;
  	cout << "�m�W" << "\t" << "���Z" << endl; 
  	cout << David.name << "\t" << David.score << endl; 
  	David.go();
  	David.eat("���A");
  	
  	// �إߵ��c�ܼ�
	struct Student anna;
	anna.id = "FO-2222";
	anna.name = "�w�R";
	anna.score = 60;
	cout << "�Ǹ�:" << anna.id << endl;  
	cout << "�m�W" << "\t" << "���Z" << endl; 
  	cout << anna.name << "\t" << anna.score << endl; 
  	anna.go();
  	anna.eat("��");    
  	
  	system("pause");
  	return 0;
}
