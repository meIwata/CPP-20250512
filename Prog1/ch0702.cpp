#include <iostream> 
using namespace std;


int main(){ // �D�{�� 
	int arr[5];
	arr[0] = 55;
	arr[4] = 100;
//	cout<< sizeof(arr) << endl;

	int length = sizeof(arr) / sizeof(arr[0]); 
	/*sizeof(arr) �O�}�C���`�j�p�]�Ҧp�G20 bytes�^�C
	  sizeof(arr[0]) �O��Ӥ������j�p�]�Ҧp�G4 bytes�^�C*/

	int arr2[]={1, 2, 3, 40, 50};
	
	
	// for-loop for�j��
	for(int i=0;i<5; i++){
//		cout<< arr[i] << endl;
		printf("arr[%d] = %d\t", i, arr[i]);
		printf("arr2[%d] = %d\t", i, arr2[i]);
		printf("��}�C�ۥ[ = %d\n", arr[i] + arr2[i]);
	}
	
	
	system("PAUSE");
	return 0;
}
