#include <Windows.h>
#include <Graphics.h>
#include<string>
using namespace std;

//��ӭ����
void Welcome(){
	
	initgraph(550,680);
	
	//��ȡ��ǰ����
	HWND hwnd =GetHWnd();
	SetWindowText(hwnd, _T("����˹����"));
	//�����ı���ʽ
	settextstyle(40, 0, _T("΢���ź�"));
	setcolor(WHITE);
	outtextxy(200,160,_T("����˹����"));

	setcolor(BLUE);
	settextstyle(23, 0, _T("΢���ź�"));
	outtextxy(180, 210, _T("���_�Ӷ���˹���鿪ʼ��"));


	Sleep(3000);
}

//��ʼ����Ϸ����
void initGameScene(void){
	int level=1;
	int scroe = 0;
	char level_c[16];
	char scroe_c[16] = "0";
	cleardevice();
	setcolor(WHITE);
	rectangle(30,30 , 400, 660);
	rectangle(32, 32, 398, 658);
	
	settextstyle(28, 0,_T("΢���ź�"));
	/*setcolor(BLUE);*/
	rectangle(433, 30, 515, 115);
	rectangle(436, 32, 513, 112);
	outtextxy(448,118,_T("��һ��"));
	outtextxy(448, 158, _T("�÷�:"));
	sprintf_s(scroe_c,"%d",scroe);
	outtextxy(498, 158, scroe_c);
	outtextxy(448, 188, _T("�Ѷ�:"));
	sprintf_s(level_c, "%d", level);
	outtextxy(498, 188, level_c);//ע��ʹ�ö��ֽ��ַ�������Ȼ�����˱���
	outtextxy(448, 558, _T("���¿�ʼ"));
	outtextxy(448, 588, _T("��ͣ"));
}

int main(void){
	Welcome();
	initGameScene();
	system("pause");
	closegraph();
	
	return 0;
}