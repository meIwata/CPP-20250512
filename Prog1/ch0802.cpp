#include <iostream>
using namespace std;


int main(){
    int var[] = {7, 5, 2, 1};
    int sum = 0;
    cout << "var address: " << var << endl;
    for(int i = 0; i < 4; i++){
        // sum += var[i];
        sum += *(var + i); // ©Î sum += var[i]; 
    }
    cout << "¥[Á`: " << sum << endl;
    cout << "var address: " << var << endl;
	
	system("PAUSE");
	return 0;
}

