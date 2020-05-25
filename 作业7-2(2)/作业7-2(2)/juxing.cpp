// juxing.cpp : 实现文件
//

#include "stdafx.h"
#include "作业7-2(2).h"
#include "juxing.h"
#include "afxdialogex.h"


// juxing 对话框

IMPLEMENT_DYNAMIC(juxing, CDialogEx)

juxing::juxing(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, top(0)
	, left(0)
	, bottom(0)
	, right(0)
{

}

juxing::~juxing()
{
}

void juxing::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, top);
	DDX_Text(pDX, IDC_EDIT3, left);
	DDX_Text(pDX, IDC_EDIT2, bottom);
	DDX_Text(pDX, IDC_EDIT4, right);
}


BEGIN_MESSAGE_MAP(juxing, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &juxing::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &juxing::OnBnClickedButton1)
END_MESSAGE_MAP()


// juxing 消息处理程序


void juxing::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void juxing::OnBnClickedButton1()
{// TODO: 在此添加控件通知处理程序代码
	
}
