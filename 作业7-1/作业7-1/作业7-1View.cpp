
// 作业7-1View.cpp : C作业71View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业7-1.h"
#endif

#include "作业7-1Doc.h"
#include "作业7-1View.h"
#include "Calculator.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业71View

IMPLEMENT_DYNCREATE(C作业71View, CView)

BEGIN_MESSAGE_MAP(C作业71View, CView)
	ON_COMMAND(ID_VIEW_CALCULATOR, &C作业71View::OnViewCalculator)
END_MESSAGE_MAP()

// C作业71View 构造/析构

C作业71View::C作业71View()
{
	a.Format(_T("计算器在视图菜单里"));
	// TODO: 在此处添加构造代码

}

C作业71View::~C作业71View()
{
}

BOOL C作业71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业71View 绘制

void C作业71View::OnDraw(CDC* pDC)
{
	C作业71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 200,a);

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业71View 诊断

#ifdef _DEBUG
void C作业71View::AssertValid() const
{
	CView::AssertValid();
}

void C作业71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业71Doc* C作业71View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业71Doc)));
	return (C作业71Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业71View 消息处理程序


void C作业71View::OnViewCalculator()
{
	Calculator *cp = new Calculator();
	cp->Create(IDD_DIALOG1);
	cp->ShowWindow(1);


	// TODO: 在此添加命令处理程序代码
}
