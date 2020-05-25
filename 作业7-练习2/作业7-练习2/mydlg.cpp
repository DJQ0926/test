// mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "作业7-练习2.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg 对话框

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, X(_T(""))
{

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, X);
	DDV_MaxChars(pDX, X, 100000);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
END_MESSAGE_MAP()


// mydlg 消息处理程序
