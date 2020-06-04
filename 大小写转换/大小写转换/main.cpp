#include<stdio.h>
#include<Windows.h>

int main(void){
	char n;
	int x;
	printf("请输入一个字母：");
	while (1){
	scanf_s("%c",&n,sizeof(n));
	if (n>='a'&&n<='z'){ //小写字母

		x= n - 32;
		printf("对应的大写字母是：%c\n", char(x));
	}else if (n>='A'&&n<='Z'){
		x = n + 32;
		printf("对应的小写字母是：%c\n", char(x));

	}/*else{
		printf("你的输入有误，请输入a-z或者A-Z\n");
	}*/
	
	}

	
	system("pause");
	return 0;
}