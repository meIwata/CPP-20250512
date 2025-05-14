#include <iostream>
using namespace std;

int main()
{
    // char name[20]; // C 語言中使用的字串表示方式（固定大小的字元陣列）
    string name; // C++ 中的字串類型（更現代化，支援動態大小）
	int year = 2025;
    cout << "請輸入姓名：";
    cin >> name; // 從標準輸入讀取字串，直接存入 C++ 的 string 類型變數

    cout << endl << year << " 歡迎 " << name << " 使用本軟體！" << endl;

    // printf 是 C 語言的輸出函數，與 C++ string 類型不直接相容，必須使用 .c_str() 方法將 string 轉換為 C 樣式字串
    printf("%d 歡迎 %s 使用本軟體！\n", year, name.c_str());
	printf("%s 的字串長度: %d\n", name.c_str(), name.length());

    system("pause");

    return 0;
}
