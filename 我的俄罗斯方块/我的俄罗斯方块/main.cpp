#include <Windows.h>
#include <Graphics.h>
#include<string>
using namespace std;

//欢迎界面
void Welcome(){
	
	initgraph(550,680);
	
	//获取当前窗口
	HWND hwnd =GetHWnd();
	SetWindowText(hwnd, _T("俄罗斯方块"));
	//设置文本样式
	settextstyle(40, 0, _T("微软雅黑"));
	setcolor(WHITE);
	outtextxy(200,160,_T("俄罗斯方块"));

	setcolor(BLUE);
	settextstyle(23, 0, _T("微软雅黑"));
	outtextxy(180, 210, _T("编程_从俄罗斯方块开始！"));


	Sleep(3000);
}

//初始化游戏场景
void initGameScene(void){
	int level=1;
	int scroe = 0;
	char level_c[16];
	char scroe_c[16] = "0";
	cleardevice();
	setcolor(WHITE);
	rectangle(30,30 , 400, 660);
	rectangle(32, 32, 398, 658);
	
	settextstyle(28, 0,_T("微软雅黑"));
	/*setcolor(BLUE);*/
	rectangle(433, 30, 515, 115);
	rectangle(436, 32, 513, 112);
	outtextxy(448,118,_T("下一个"));
	outtextxy(448, 158, _T("得分:"));
	sprintf_s(scroe_c,"%d",scroe);
	outtextxy(498, 158, scroe_c);
	outtextxy(448, 188, _T("难度:"));
	sprintf_s(level_c, "%d", level);
	outtextxy(498, 188, level_c);//注意使用多字节字符集，不然过不了编译
	outtextxy(448, 558, _T("重新开始"));
	outtextxy(448, 588, _T("暂停"));
}

int main(void){
	Welcome();
	initGameScene();
	system("pause");
	closegraph();
	
	return 0;
}