// mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "作业7-练习3.h"
#include "mydlg.h"
#include "afxdialogex.h"


// mydlg 对话框

IMPLEMENT_DYNAMIC(mydlg, CDialogEx)

mydlg::mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{    

}

mydlg::~mydlg()
{
}

void mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, listbox);
}


BEGIN_MESSAGE_MAP(mydlg, CDialogEx)
END_MESSAGE_MAP()


// mydlg 消息处理程序


BOOL mydlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	listbox.AddString(B);
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
