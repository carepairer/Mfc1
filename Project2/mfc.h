#pragma once  //ֻ����һ�η�ֹ�ظ�����

#include <afxwin.h>


//1Ӧ�ó����� �������ࣩ
class MyApp: public CWinApp
{
public:
	virtual BOOL InitInstance();
protected:
private:
};

 //2.����� �������ࣩ

class MyFrame : public CFrameWnd
{
public:
	MyFrame();

private:
};

/*�޷��������ⲿ���� WinMain���÷����ں��� "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ) �б�����


(2)��Ŀ->����->��������->������->ϵͳ�еġ���ϵͳ������ΪWindows(/ SUBSYSTEM:WINDOWS)
*/
