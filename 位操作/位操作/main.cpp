#include<stdio.h>
#include<Windows.h>


int main(void){
	//��һ�������ĵ�λ�޸ĳ� 0110��
	int x;
	scanf_s("%d", &x, sizeof(x));
	//��4λ&~15 ��Ҳ�����������X��15�ķ�Ҳ���� ��4λΪ0 λ�룩 ����4λ��Ϊ0000
	   //����ԭ����ʲô ��0λ�� ������0��
		x = x&(~15);
	
	//�� λ| ��xԭ���ĵ�λ0000 ��Ϊ 0110,���� λ| 0 ���Ǳ���
	

	x = x | 6;
	
	printf("%d",x);

	system("pause");

	return 0;
}