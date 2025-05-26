#include <iostream>
using namespace std;


int main(){
	string str; // c++ 字串
	printf("輸入英文字串: ") ;
//	cin>> str;
	getline(cin, str); // 輸入字串含空白 

//	for(int i; i<=str.size();i++){
//		
//	}
	int i= 0;
	while(i < str.size()){
		char ch = str.at(i);
		if(ch >= 'a' && ch <= 'z'){
			ch -= 32;
			str.at(i) = ch; // 把值存回去 
		}
		i++;
	}	
	cout << str << endl;
	system("PAUSE");
	return 0;
}

