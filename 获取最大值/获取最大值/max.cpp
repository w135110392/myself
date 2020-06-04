#include<iostream>


using namespace std;

int main(void){
	int str[] = {
	2,
	3,
	5,
	100

	};
	int max = 0;
	int count=sizeof(str)/sizeof(str[0]);
	for (int i = 0; i < count;i++){
		
		if (str[i]>max){
			max = str[i];
		 }
	
	}
	cout << "最大值是："<<max<<endl;

	system("pause");
	return 0;
}