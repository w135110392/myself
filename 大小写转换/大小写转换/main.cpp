#include<stdio.h>
#include<Windows.h>

int main(void){
	char n;
	int x;
	printf("������һ����ĸ��");
	while (1){
	scanf_s("%c",&n,sizeof(n));
	if (n>='a'&&n<='z'){ //Сд��ĸ

		x= n - 32;
		printf("��Ӧ�Ĵ�д��ĸ�ǣ�%c\n", char(x));
	}else if (n>='A'&&n<='Z'){
		x = n + 32;
		printf("��Ӧ��Сд��ĸ�ǣ�%c\n", char(x));

	}/*else{
		printf("�����������������a-z����A-Z\n");
	}*/
	
	}

	
	system("pause");
	return 0;
}