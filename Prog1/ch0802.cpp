#include <iostream>
using namespace std;


int main(){
	int var[] = {7, 5, 2, 1};
	int sum = 0;
	for(int i = 0; i<4; i++){
		// sum += var[i];
		sum += *(var + i);
	}
	printf("¥[Á`: %d%n", sum);

	system("PAUSE");
	return 0;
}

