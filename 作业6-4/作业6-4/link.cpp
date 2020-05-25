// link.cpp : 实现文件
//

#include "stdafx.h"
#include "作业6-4.h"
#include "link.h"
#include "afxdialogex.h"


// link 对话框

IMPLEMENT_DYNAMIC(link, CDialogEx)

link::link(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, X(_T(""))
	, Y(0)
	, R(_T(""))
{

}

link::~link()
{
}

void link::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, X);
	DDV_MaxChars(pDX, X, 10000);
	DDX_Text(pDX, IDC_EDIT3, Y);
	DDV_MinMaxInt(pDX, Y, -10000, 10000);
	DDX_Text(pDX, IDC_EDIT1, R);
	DDV_MaxChars(pDX, R, 20000);
}


BEGIN_MESSAGE_MAP(link, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &link::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &link::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &link::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &link::OnBnClickedButton1)
END_MESSAGE_MAP()


// link 消息处理程序


void link::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void link::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void link::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void link::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CString A;
	A.Format(_T("%d"), Y);

	R = X + A;
	UpdateData(false);


}
