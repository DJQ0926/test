// add.cpp : 实现文件
//

#include "stdafx.h"
#include "作业6-2.h"
#include "add.h"
#include "afxdialogex.h"


// add 对话框

IMPLEMENT_DYNAMIC(add, CDialogEx)

add::add(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, r(0)
{

}

add::~add()
{
}

void add::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, -10000, 10000);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, -10000, 10000);
	DDX_Text(pDX, IDC_EDIT3, r);
	DDV_MinMaxInt(pDX, r, -20000, 20000);
}


BEGIN_MESSAGE_MAP(add, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &add::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &add::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &add::OnBnClickedButton1)
END_MESSAGE_MAP()


// add 消息处理程序


void add::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void add::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void add::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	r = x + y;
	UpdateData(false);
}
