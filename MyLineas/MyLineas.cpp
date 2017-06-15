#include "stdafx.h"  //________________________________________ MyLineas.cpp
#include "MyLineas.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	MyLineas app;
	return app.BeginDialog(IDI_MyLineas, hInstance);
}

void MyLineas::Window_Open(Win::Event& e)
{
	Line(3);
	Line(4);
	Line(3);
}
void MyLineas::Line(int pregunta)
{
	for (int i = 0; i < pregunta; i++)tbx1.Text += L"*";
	tbx1.Text += L"\r\n";
}

