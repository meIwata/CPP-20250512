#include <iostream>
using namespace std;

int main()
{
    // char name[20]; // C �y�����ϥΪ��r���ܤ覡�]�T�w�j�p���r���}�C�^
    string name; // C++ �����r�������]��{�N�ơA�䴩�ʺA�j�p�^
	int year = 2025;
    cout << "�п�J�m�W�G";
    cin >> name; // �q�зǿ�JŪ���r��A�����s�J C++ �� string �����ܼ�

    cout << endl << year << " �w�� " << name << " �ϥΥ��n��I" << endl;

    // printf �O C �y������X��ơA�P C++ string �����������ۮe�A�����ϥ� .c_str() ��k�N string �ഫ�� C �˦��r��
    printf("%d �w�� %s �ϥΥ��n��I\n", year, name.c_str());
	printf("%s ���r�����: %d\n", name.c_str(), name.length());

    system("pause");

    return 0;
}
