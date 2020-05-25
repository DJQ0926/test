
// 作业6-1View.cpp : C作业61View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业6-1.h"
#endif

#include "作业6-1Doc.h"
#include "作业6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业61View

IMPLEMENT_DYNCREATE(C作业61View, CView)

BEGIN_MESSAGE_MAP(C作业61View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C作业61View 构造/析构

C作业61View::C作业61View()
{
	
	// TODO: 在此处添加构造代码

}

C作业61View::~C作业61View()
{
}

BOOL C作业61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业61View 绘制

void C作业61View::OnDraw(CDC* pDC)
{
	C作业61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	// TODO: 在此处为本机数据添加绘制代码
}


// C作业61View 诊断

#ifdef _DEBUG
void C作业61View::AssertValid() const
{
	CView::AssertValid();
}

void C作业61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业61Doc* C作业61View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业61Doc)));
	return (C作业61Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业61View 消息处理程序


void C作业61View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);

	CRect A(point.x - 100, point.y - 200, point.x + 100, point.y + 200);
	dc.Rectangle(A);
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}


void C作业61View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);

	CRect A(point.x - 100, point.y - 200, point.x + 100,point.y + 200);
	dc.Rectangle(A);


	CView::OnLButtonDown(nFlags, point);
}


void C作业61View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	
	CRect A(point.x - 100, point.y - 200, point.x + 100, point.y + 200);
	dc.Rectangle(A);

	CView::OnLButtonUp(nFlags, point);
}
