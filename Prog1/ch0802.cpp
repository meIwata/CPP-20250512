#include <iostream>
using namespace std;


int main(){
    int var[] = {7, 5, 2, 1};
    int sum = 0;
    int *ptr;
    ptr = var;
    cout << "var address: " << var << endl;
    cout << "ptr address: " << ptr << endl;
    for(int i = 0; i < 4; i++){
        // sum += var[i];
        // sum += *(var + i); // ©Î sum += var[i]; 
        sum += *(ptr++);
    }
    
    cout << "¥[Á`: " << sum << endl;
    cout << "var address: " << var << endl;
	cout << "ptr address: " << ptr << endl;
	system("PAUSE");
	return 0;
}

