// Calculator.cpp : 实现文件
//

#include "stdafx.h"
#include "作业7-1.h"
#include "Calculator.h"
#include "afxdialogex.h"


// Calculator 对话框

IMPLEMENT_DYNAMIC(Calculator, CDialogEx)

Calculator::Calculator(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, sum(0)
	, r(0)
{

}

Calculator::~Calculator()
{

}

void Calculator::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDV_MinMaxInt(pDX, x, -500, 500);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDV_MinMaxInt(pDX, y, -500, 500);
	DDX_Text(pDX, IDC_EDIT3, sum);
	DDV_MinMaxDouble(pDX, sum, -250000, 250000);
	DDX_Text(pDX, IDC_EDIT4, r);
	DDV_MinMaxDouble(pDX, r, 0, 500);
}


BEGIN_MESSAGE_MAP(Calculator, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &Calculator::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &Calculator::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON5, &Calculator::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON3, &Calculator::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &Calculator::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON4, &Calculator::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &Calculator::OnBnClickedButton6)
END_MESSAGE_MAP()


// Calculator 消息处理程序


void Calculator::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void Calculator::OnBnClickedButton1()
{
	this->UpdateData(true);
	 sum = x + y;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Calculator::OnBnClickedButton7()
{  
	// TODO: 在此添加控件通知处理程序代码
}


void Calculator::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	sum = 1/ r;
	UpdateData(false);
}


void Calculator::OnBnClickedButton3()
{
	this->UpdateData(true);
	sum = y * x;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Calculator::OnBnClickedButton2()
{          
	this->UpdateData(true);
	sum = y-x;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Calculator::OnBnClickedButton4()
{
	this->UpdateData(true);
	sum = y / x;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void Calculator::OnBnClickedButton6()
{
	this->UpdateData(true);
	sum = sqrt(r);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
