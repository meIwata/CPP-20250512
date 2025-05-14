#include <iostream> 
using namespace std;


int main(){ // 主程式 
	int arr[5];
	arr[0] = 55;
	arr[4] = 100;
//	cout<< sizeof(arr) << endl;

	int length = sizeof(arr) / sizeof(arr[0]); 
	/*sizeof(arr) 是陣列的總大小（例如：20 bytes）。
	  sizeof(arr[0]) 是單個元素的大小（例如：4 bytes）。*/

	int arr2[]={1, 2, 3, 40, 50};
	
	
	// for-loop for迴圈
	for(int i=0;i<5; i++){
//		cout<< arr[i] << endl;
		printf("arr[%d] = %d\t", i, arr[i]);
		printf("arr2[%d] = %d\t", i, arr2[i]);
		printf("兩陣列相加 = %d\n", arr[i] + arr2[i]);
	}
	
	
	system("PAUSE");
	return 0;
}
