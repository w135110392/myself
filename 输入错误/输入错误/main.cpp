#include<iostream>
#include<windows.h>
using namespace std;


int main(void){
	int a;
	int b;
	int c;
	cout << "请输入a:" << endl;
	cin >> a;
	 if (cin.fail()){
			cout << "输入错误，请输入一个整数！" << endl;
			cin.clear();
			cin.sync();
		}
	 cout << "请输入b:" << endl;
	 cin >> b;
	 if (cin.fail()){
		 cout << "输入错误，请输入一个整数！" << endl;
		 cin.clear();
		 cin.sync();
	 }
	 cout << "请输入c:" << endl;
	 cin >> c;
	 if (cin.fail()){
		 cout << "输入错误，请输入一个整数！" << endl;
		 cin.clear();
		 cin.sync();
	 }

	 cout << "a等于：" << a << endl;
	 cout << "b等于：" << b<< endl;
	 cout << "c等于：" << c << endl;
	
	

	system("pause");

	return 0;
}