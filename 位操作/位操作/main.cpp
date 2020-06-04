#include<stdio.h>
#include<Windows.h>


int main(void){
	//将一个整数的低位修改成 0110；
	int x;
	scanf_s("%d", &x, sizeof(x));
	//后4位&~15 （也就是输入的数X跟15的反也就是 后4位为0 位与） 将后4位变为0000
	   //不管原来是什么 用0位与 都会变成0；
		x = x&(~15);
	
	//用 位| 将x原来的低位0000 改为 0110,本身 位| 0 就是本身；
	

	x = x | 6;
	
	printf("%d",x);

	system("pause");

	return 0;
}