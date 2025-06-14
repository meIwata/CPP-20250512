#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>  //for vector sort 
using namespace std;
//宣告自訂函式 
void vectorAdd(vector<int> *v1); // 加了*就是指標變數，call by address 

// 自訂義涵式(排序用) 
bool compare(int a, int b){
	return a > b; // 遞增
//	return a < b; // 遞減 
}

//主函式(程式起始點)
int main()
{
	//int  arr[]={28,22,12,44,13};
	//宣告int型別的vector(集合，資料容器，長度可變陣列) 
	vector<int> v1;
	//新增元素到vector 
	v1.push_back(12); v1.push_back(5); v1.push_back(89);
	v1.push_back(120); v1.push_back(66); v1.push_back(10);
	v1.push_back(38);
	
	vectorAdd(&v1); //呼叫自訂函式，call by address 
	//vector排序
	
	// 遞增 
//	sort(v1.begin(), v1.end()); //記得要 include <algorithm>
//	sort(v1.begin(), v1.end(), less<int>());

	// 反序 
//	 reverse(v1.begin(), v1.end()); // 38 數回來到 12 
	
	// 遞減 
//	sort(v1.begin(), v1.end(), greater<int>());
	sort(v1.begin(), v1.end(),compare);


	//顯示vector元素 
	for(int i=0;i<v1.size();i++)
	{
		printf("%d\t",v1.at(i)); //取得vector 每個元素(index 0 ~ N)  
	}
	printf("\n"); //換行 
	system("pause");
	return 0;
}
//自訂函式 
void vectorAdd(vector<int> *v1) // 加了*就是指標變數，call by address
{
	cout << "傳入的vector長度:" << v1->size() << endl;
	for(int i=0 ; i<v1->size() ; i++)
	{
		v1->at(i) = v1->at(i) + 10; //測式將vector每一元素+10
		printf("%d\t", v1->at(i)); 
	}
	printf("\n");
	//實作 return vector 作練習
}

