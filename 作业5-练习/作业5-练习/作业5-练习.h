
// ��ҵ5-��ϰ.h : ��ҵ5-��ϰ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��ҵ5��ϰApp:
// �йش����ʵ�֣������ ��ҵ5-��ϰ.cpp
//

class C��ҵ5��ϰApp : public CWinApp
{
public:
	C��ҵ5��ϰApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��ҵ5��ϰApp theApp;
