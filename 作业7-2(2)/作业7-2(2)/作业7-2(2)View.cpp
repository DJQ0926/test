
// 作业7-2(2)View.cpp : C作业722View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业7-2(2).h"
#endif

#include "作业7-2(2)Doc.h"
#include "作业7-2(2)View.h"
#include "juxing.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业722View

IMPLEMENT_DYNCREATE(C作业722View, CView)

BEGIN_MESSAGE_MAP(C作业722View, CView)
	ON_COMMAND(ID_SHOWJUXING, &C作业722View::OnShowjuxing)
	ON_BN_CLICKED(IDC_BUTTON1, &C作业722View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C作业722View 构造/析构

C作业722View::C作业722View()
{
	// TODO: 在此处添加构造代码

}

C作业722View::~C作业722View()
{
}

BOOL C作业722View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业722View 绘制

void C作业722View::OnDraw(CDC* /*pDC*/)
{
	C作业722Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业722View 诊断

#ifdef _DEBUG
void C作业722View::AssertValid() const
{
	CView::AssertValid();
}

void C作业722View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业722Doc* C作业722View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业722Doc)));
	return (C作业722Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业722View 消息处理程序


void C作业722View::OnShowjuxing()
{       
	// TODO: 在此添加命令处理程序代码
	juxing cp;
	
	int r = cp.DoModal();
	if (r == IDOK)
	{
		CRect A (cp.top, cp.left, cp.bottom, cp.right);
		GetDC()->Ellipse(A);
	}
}


void C作业722View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}
