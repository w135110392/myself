#include<Windows.h>
#include<iostream>
#include<string>
using  namespace std; 


int add(int a, int b){
	int c;
	c = a + b;
	return c;
}





int main(void){
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cout << "a + bµÄºÍÊÇ£º";
	
	cout << add(a, b) << endl;
	
	system("pause");
	return 0;
}