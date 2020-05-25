// color.cpp : 实现文件
//

#include "stdafx.h"
#include "作业7-4.h"
#include "color.h"
#include "afxdialogex.h"


// color 对话框

IMPLEMENT_DYNAMIC(color, CDialogEx)

color::color(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

color::~color()
{
}

void color::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, 0, 255);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, 0, 255);
	DDX_Text(pDX, IDC_EDIT4, z);
	DDV_MinMaxInt(pDX, z, 0, 255);
}


BEGIN_MESSAGE_MAP(color, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &color::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &color::OnBnClickedOk)
END_MESSAGE_MAP()


// color 消息处理程序


void color::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void color::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
