#include <iostream>
using namespace std;


int main(){
	string str; // c++ �r��
	printf("��J�^��r��: ") ;
//	cin>> str;
	getline(cin, str); // ��J�r��t�ť� 

//	for(int i; i<=str.size();i++){
//		
//	}
	int i= 0;
	while(i < str.size()){
		char ch = str.at(i);
		if(ch >= 'a' && ch <= 'z'){
			ch -= 32;
			str.at(i) = ch; // ��Ȧs�^�h 
		}
		i++;
	}	
	cout << str << endl;
	system("PAUSE");
	return 0;
}

