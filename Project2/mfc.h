#pragma once  //只调用一次防止重复包含

#include <afxwin.h>


//1应用程序类 （派生类）
class MyApp: public CWinApp
{
public:
	virtual BOOL InitInstance();
protected:
private:
};

 //2.框架类 （派生类）

class MyFrame : public CFrameWnd
{
public:
	MyFrame();

private:
};

/*无法解析的外部符号 WinMain，该符号在函数 "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ) 中被引用


(2)项目->属性->配置属性->连接器->系统中的【子系统】设置为Windows(/ SUBSYSTEM:WINDOWS)
*/
