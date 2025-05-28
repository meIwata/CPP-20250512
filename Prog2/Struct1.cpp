#include <iostream>
#include <stdlib.h>
using namespace std;
//自訂結構型別Student 
struct Student
{
	//field(資料欄位)
	string id; 
	string name;
	int score;
	//function
	void go()
	{
		printf("go go go......\n");
	}
	void eat(string food){
		cout << "吃" << food << endl;
	}
};
//結構型別是類別class的前世 
int main()
{
  	//宣告結構變數David,並設定初始值 
	struct Student David = {"FO-1001","大衛王",92};
	cout << "學號:" << David.id << endl;
  	cout << "姓名" << "\t" << "成績" << endl; 
  	cout << David.name << "\t" << David.score << endl; 
  	David.go();
  	David.eat("海鮮");
  	
  	// 建立結構變數
	struct Student anna;
	anna.id = "FO-2222";
	anna.name = "安娜";
	anna.score = 60;
	cout << "學號:" << anna.id << endl;  
	cout << "姓名" << "\t" << "成績" << endl; 
  	cout << anna.name << "\t" << anna.score << endl; 
  	anna.go();
  	anna.eat("素");    
  	
  	system("pause");
  	return 0;
}
