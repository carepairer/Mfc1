#include "mfc.h"

//有且只有一个全局的应用程序类堆像
MyApp myApp;


//程序的入口地址
BOOL MyApp::InitInstance()
{
	/*
	1. 创建框架类对象
	2. 显示窗口
	3. 更新窗口
	4. 保存框架类对象指针
	*/
	
	//1.创建框架类对象
	MyFrame* frame = new MyFrame; //构造函数

	//2.显示窗口
	frame->ShowWindow(SW_SHOWNORMAL);

	//3,更新窗口
	frame->UpdateWindow();

	//4.保存框架类对象指针
	m_pMainWnd = frame;


	return TRUE;
}

MyFrame::MyFrame()
{
	//CWbd类的成员函数 CWnd::Create
	//CFrameWnd继承于CWnd


	Create(NULL, TEXT("MFC32"));
}
