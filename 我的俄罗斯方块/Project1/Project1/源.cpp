#include <Windows.h>
#include <Graphics.h>
void Welcome(){

	initgraph(550, 460);

	//获取当前窗口
	HWND hwnd = GetHWnd();
	
	SetWindowText(hwnd, _T("俄罗斯方块"));


	Sleep(3000);
	closegraph();
}


int main(void){
	Welcome();
	
	return 0;
}