#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main(void){
	string myGirl("��ϼ");
	string yourGirl;
	cout << "��ϲ��"<<myGirl << endl;
	cout << "��ϲ���ĸ�Ů����" << endl;
	cin >> yourGirl;

	if (myGirl == yourGirl){
		cout << "���������ɣ�" << endl;
	}else{
		cout << "ף���Ҹ���" << endl;
	}

	system("pause");

	return 0;
}