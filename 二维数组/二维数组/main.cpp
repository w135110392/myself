#include<iostream>


using namespace std;
#define LINES 4;
#define COLS  5;

int main(void){
	int a[4][5];
	//给4行5列的数组赋值
	/*
		1  2  3  4  5     a[0][0]=1 a[0][1]=2  a[0][2]=3 a[0][3]=4 a[0][4]=5
		6  7  8  9  10    a[1][0]=6 a[1][1]=7  a[1][2]=8 a[1][3]=9 a[1][4]=10
		11 12 13 14 15    a[2][0]=11 a[2][1]=12  a[2][2]=13 a[2][3]=14 a[2][4]=15
		16 17 18 19 20
	*/
	for (int i = 0; i <4; i++){
		for (int j =0; j < 5; j++){
			a[i][j] = ((5 * i) + j)+1 ; //从多少开始后面就加几
		cout << a[i][j]<<" ";
		}
		cout << endl;
	}


	for (int i = 0; i < 20; i++){

		a[i/5][i%5] = i + 1;   //当右边等于 6 的时候 其实是 i+1 等于6 而不是 i 等于6 注意 
	
		cout << a[i / 5][i % 5]<<" ";



	}
	system("pause");
	return 0;
}