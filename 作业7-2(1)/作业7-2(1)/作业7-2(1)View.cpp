
// 作业7-2(1)View.cpp : C作业721View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业7-2(1).h"
#endif

#include "作业7-2(1)Doc.h"
#include "作业7-2(1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业721View

IMPLEMENT_DYNCREATE(C作业721View, CView)

BEGIN_MESSAGE_MAP(C作业721View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C作业721View 构造/析构

C作业721View::C作业721View()
{
	// TODO: 在此处添加构造代码

}

C作业721View::~C作业721View()
{
}

BOOL C作业721View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业721View 绘制

void C作业721View::OnDraw(CDC* pDC)
{
	C作业721Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业721View 诊断

#ifdef _DEBUG
void C作业721View::AssertValid() const
{
	CView::AssertValid();
}

void C作业721View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业721Doc* C作业721View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业721Doc)));
	return (C作业721Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业721View 消息处理程序


void C作业721View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x1 = point.x;
	y1 = point.y;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void C作业721View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	x2 = point.x;
	y2 = point.y;
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;
	Invalidate();
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}


void C作业721View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		x2 = point.x;
		y2 = point.y;
		A.left = x1;
		A.top = y1;
		A.right = x2;
		A.bottom = y2;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
