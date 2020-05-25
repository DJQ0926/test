
// 作业2-4View.cpp : C作业24View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-4.h"
#endif

#include "作业2-4Doc.h"
#include "作业2-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业24View

IMPLEMENT_DYNCREATE(C作业24View, CView)

BEGIN_MESSAGE_MAP(C作业24View, CView)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业24View 构造/析构

C作业24View::C作业24View()
{
	// TODO: 在此处添加构造代码

}

C作业24View::~C作业24View()
{
}

BOOL C作业24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业24View 绘制

void C作业24View::OnDraw(CDC* /*pDC*/)
{
	C作业24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业24View 诊断

#ifdef _DEBUG
void C作业24View::AssertValid() const
{
	CView::AssertValid();
}

void C作业24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业24Doc* C作业24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业24Doc)));
	return (C作业24Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业24View 消息处理程序


void C作业24View::OnLButtonUp(UINT nFlags, CPoint point)
{
	

	CView::OnLButtonUp(nFlags, point);
}


void C作业24View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C作业24Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, pDoc->A);
	CView::OnLButtonDown(nFlags, point);
}
