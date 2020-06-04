#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//加法计算过程
void sub(int *a, int *b, int *c){  
	
	*c = *a + *b;
}
//两个数字输入过程，并判断输入是否正确
void input(int *a){

	while (1){
		cin >> *a;
		if (cin.fail()){
			cin.clear();
			cin.sync();
			cout << "请输入一个整数!" << endl;
		}
		else{
			break;
		}
	}
}
//调用加法过程 并判断是否继续计算 或者退出
void subPlus(void){

	int a = 0;
	int b = 0;
	int c = 0; //保存计算结果
	char quite;
	while (1){
		cout << "请输入a的值:";
		input(&a);
		cout << "请输入b的值:";
		input(&b);
		sub(&a, &b, &c);

		cout << "计算结果为:";
		cout << c << endl;
		system("pause");

		cout << "退出('y')"<<endl;
		cin.sync();
		quite = _getch();
		
		if (quite == 'y'|| quite == 'Y'){
			break;
		}
		else if (quite == '\r')
			{
				continue;
			}
	}


}

int main(void){
	subPlus();
	
	return 0;
}



