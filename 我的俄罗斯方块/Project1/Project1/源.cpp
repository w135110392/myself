#include <Windows.h>
#include <Graphics.h>
void Welcome(){

	initgraph(550, 460);

	//��ȡ��ǰ����
	HWND hwnd = GetHWnd();
	
	SetWindowText(hwnd, _T("����˹����"));


	Sleep(3000);
	closegraph();
}


int main(void){
	Welcome();
	
	return 0;
}