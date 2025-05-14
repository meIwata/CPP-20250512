#include <iostream>  
using namespace std; 
int main()
{
	char a[12];  // c肚参﹃ a
	char b[12];  // c﹃ b
	char c[24];  // c﹃ c
	char buffer[10];
    int r;  // ㄢ计㎝ 
	cout << "叫块计﹃ a" ;
    cin >> a;
    cout << "叫块计﹃ b" ;
    cin >> b;
    // ﹃ 
    strcpy(c,a);  // ﹃狡籹 c=a
    strcat(c,b);  // ﹃ c=c+b ┮ c=a+b 
    cout << "﹃ a+b =" << c << endl;
    // ㄢ计㎝ 
    r=atoi(a)+atoi(b);
    cout << "计㎝=" << r << endl;
    // 盢计(ㄢ计㎝ ) r 锣﹃ buffer[] 皚 
    itoa(r,buffer,10); // itoa() 盢俱计锣传﹃ 
    cout << "buffer=" << buffer <<endl;
    cout << "buffer 皚=" << strlen(buffer) << endl; // buffer 皚
 
	system("pause");
	return 0;
}
