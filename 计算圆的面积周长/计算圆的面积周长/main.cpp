#include<iostream>
#include<windows.h>
using namespace std;


void circle_len(void){	
	float r;
	float len;
	float s;
	cout << "������Բ�İ뾶��" ;
	cin >> r;
	len = 2 * 3.14*r;
	s = 3.14*r*r;

	cout.precision(2);
	cout.flags(cout.fixed);
	cout << "Բ���ܳ��ǣ�" << len << endl;
	cout << "Բ������ǣ�" << s << endl;


}



int main(void){
	circle_len();
	
	system("pause");


	return 0;
}