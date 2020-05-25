
// 作业2-2View.cpp : C作业22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-2.h"
#endif

#include "作业2-2Doc.h"
#include "作业2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业22View

IMPLEMENT_DYNCREATE(C作业22View, CView)

BEGIN_MESSAGE_MAP(C作业22View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业22View 构造/析构

C作业22View::C作业22View()
{     
	// TODO: 在此处添加构造代码
	
}

C作业22View::~C作业22View()
{
}

BOOL C作业22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业22View 绘制

void C作业22View::OnDraw(CDC* pDC)
{
	C作业22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i <pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业22View 诊断

#ifdef _DEBUG
void C作业22View::AssertValid() const
{
	CView::AssertValid();
}

void C作业22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业22Doc* C作业22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业22Doc)));
	return (C作业22Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业22View 消息处理程序


void C作业22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int a = rand() % 50 + 5;
	int b = rand() % 80 + 1;

	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);     //例二   随机椭圆
	C作业22Doc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	this->Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
