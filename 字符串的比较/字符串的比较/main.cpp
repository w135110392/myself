#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main(void){
	string myGirl("ÏòÏ¼");
	string yourGirl;
	cout << "ÎÒÏ²»¶"<<myGirl << endl;
	cout << "ÄãÏ²»¶ÄÄ¸öÅ®º¢£¿" << endl;
	cin >> yourGirl;

	if (myGirl == yourGirl){
		cout << "¹ıÀ´¾ö¶·°É£¡" << endl;
	}else{
		cout << "×£ÄãĞÒ¸££¡" << endl;
	}

	system("pause");

	return 0;
}