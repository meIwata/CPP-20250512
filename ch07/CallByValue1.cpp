#include <iostream>
using namespace std;
// �[�J�禡�쫬�ŧi
int Turbo(int);
int main()
{
	int Speed1,NewSpeed;
    cout << "�п�J��l�t��:";
    cin >> Speed1;
    NewSpeed=Turbo(Speed1); // �[�t
	cout << "�[�t��t��:" << NewSpeed << endl;
	cout << "���l�t��:" << Speed1 << endl;
	system("pause");
	return 0;
}
int Turbo(int Speed)  // �[�t 10
{
	cout << "�[�t�e�t��:" << Speed << endl;
	Speed+=10;
	return Speed;
}
