#include<iostream>
#include<windows.h>
using namespace std;


int main(void){
	int a;
	int b;
	int c;
	cout << "������a:" << endl;
	cin >> a;
	 if (cin.fail()){
			cout << "�������������һ��������" << endl;
			cin.clear();
			cin.sync();
		}
	 cout << "������b:" << endl;
	 cin >> b;
	 if (cin.fail()){
		 cout << "�������������һ��������" << endl;
		 cin.clear();
		 cin.sync();
	 }
	 cout << "������c:" << endl;
	 cin >> c;
	 if (cin.fail()){
		 cout << "�������������һ��������" << endl;
		 cin.clear();
		 cin.sync();
	 }

	 cout << "a���ڣ�" << a << endl;
	 cout << "b���ڣ�" << b<< endl;
	 cout << "c���ڣ�" << c << endl;
	
	

	system("pause");

	return 0;
}