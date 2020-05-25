
// 作业7-3View.cpp : C作业73View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业7-3.h"
#endif

#include "作业7-3Doc.h"
#include "作业7-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业73View

IMPLEMENT_DYNCREATE(C作业73View, CView)

BEGIN_MESSAGE_MAP(C作业73View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业73View 构造/析构

C作业73View::C作业73View()
{
	// TODO: 在此处添加构造代码
	A.top = 100;
	A.left = 200;
	A.bottom = 400;
	A.right = 700;


	
}

C作业73View::~C作业73View()
{
}

BOOL C作业73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业73View 绘制

void C作业73View::OnDraw(CDC* pDC)
{
	C作业73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业73View 诊断

#ifdef _DEBUG
void C作业73View::AssertValid() const
{
	CView::AssertValid();
}

void C作业73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业73Doc* C作业73View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业73Doc)));
	return (C作业73Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业73View 消息处理程序


void C作业73View::OnLButtonDown(UINT nFlags, CPoint point)
{  
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	if (point.x > 200 && point.x < 700 && point.y>100 && point.y < 400)
	{
		CClientDC dc(this);
		CPen *oldpen;
		CPen	newpen;
		newpen.CreatePen(PS_DASH, 1, RGB(255, 0, 0));
		oldpen = dc.SelectObject(&newpen);
		CRect B(200, 100, 700, 400);
		GetDC()->Rectangle(B);
		GetDC()->SelectObject(oldpen);
		GetDC()->Ellipse(A);
		

	}




	CView::OnLButtonDown(nFlags, point);
}
