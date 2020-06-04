#include<iostream>
#include<windows.h>
using namespace std;


void circle_len(void){	
	float r;
	float len;
	float s;
	cout << "请输入圆的半径：" ;
	cin >> r;
	len = 2 * 3.14*r;
	s = 3.14*r*r;

	cout.precision(2);
	cout.flags(cout.fixed);
	cout << "圆的周长是：" << len << endl;
	cout << "圆的面积是：" << s << endl;


}



int main(void){
	circle_len();
	
	system("pause");


	return 0;
}