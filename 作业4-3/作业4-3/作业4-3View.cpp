
// 作业4-3View.cpp : C作业43View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业4-3.h"
#endif

#include "作业4-3Doc.h"
#include "作业4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业43View

IMPLEMENT_DYNCREATE(C作业43View, CView)

BEGIN_MESSAGE_MAP(C作业43View, CView)
	ON_COMMAND(ID_DRAWLINE, &C作业43View::OnDrawline)
	ON_COMMAND(ID_DRAWRECTANGLE, &C作业43View::OnDrawrectangle)
	ON_COMMAND(ID_DRAWELLIPSE, &C作业43View::OnDrawellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C作业43View 构造/析构

C作业43View::C作业43View()
{
	// TODO: 在此处添加构造代码
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;

}

C作业43View::~C作业43View()
{
}

BOOL C作业43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业43View 绘制

void C作业43View::OnDraw(CDC* pDC)
{
	C作业43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	switch (n)
	{
	case 1:
	{	POINT m_point[2]{ { x1,y1 },{ x2,y2 } };
	pDC->MoveTo(m_point[0]);
	pDC->LineTo(m_point[1]);
	break; }
	case 2:
	{pDC->Rectangle(A);
	break;
	}
	case 3:
	{pDC->Ellipse(A);
	break; }
	// TODO: 在此处为本机数据添加绘制代码
	}
}

// C作业43View 诊断

#ifdef _DEBUG
void C作业43View::AssertValid() const
{
	CView::AssertValid();
}

void C作业43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业43Doc* C作业43View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业43Doc)));
	return (C作业43Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业43View 消息处理程序


void C作业43View::OnDrawline()
{	
		 n = 1;
	// TODO: 在此添加命令处理程序代码
}


void C作业43View::OnDrawrectangle()
{
		n = 2;
	// TODO: 在此添加命令处理程序代码
}


void C作业43View::OnDrawellipse()
{
		 n = 3;

	// TODO: 在此添加命令处理程序代码
}



void C作业43View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x1 = point.x;
	y1 = point.y;
	start = point;
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void C作业43View::OnLButtonUp(UINT nFlags, CPoint point)
{



	CClientDC dc(this);
	x2 = point.x;
	y2 = point.y;
	A.left = x1;
	A.top = y1;
	A.right = x2;
	A.bottom = y2;
	Invalidate();
	flag = 0;


	
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
}


void C作业43View::OnMouseMove(UINT nFlags, CPoint point)
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
