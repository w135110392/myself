#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
//�ӷ��������
void sub(int *a, int *b, int *c){  
	
	*c = *a + *b;
}
//��������������̣����ж������Ƿ���ȷ
void input(int *a){

	while (1){
		cin >> *a;
		if (cin.fail()){
			cin.clear();
			cin.sync();
			cout << "������һ������!" << endl;
		}
		else{
			break;
		}
	}
}
//���üӷ����� ���ж��Ƿ�������� �����˳�
void subPlus(void){

	int a = 0;
	int b = 0;
	int c = 0; //���������
	char quite;
	while (1){
		cout << "������a��ֵ:";
		input(&a);
		cout << "������b��ֵ:";
		input(&b);
		sub(&a, &b, &c);

		cout << "������Ϊ:";
		cout << c << endl;
		system("pause");

		cout << "�˳�('y')"<<endl;
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



