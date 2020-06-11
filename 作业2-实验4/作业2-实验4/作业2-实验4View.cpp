
// 作业2-实验4View.cpp : C作业2实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-实验4.h"
#endif

#include "作业2-实验4Doc.h"
#include "作业2-实验4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业2实验4View

IMPLEMENT_DYNCREATE(C作业2实验4View, CView)

BEGIN_MESSAGE_MAP(C作业2实验4View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业2实验4View 构造/析构

C作业2实验4View::C作业2实验4View()
{
	// TODO: 在此处添加构造代码

}

C作业2实验4View::~C作业2实验4View()
{
}

BOOL C作业2实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业2实验4View 绘制

void C作业2实验4View::OnDraw(CDC* pDC)
{
	C作业2实验4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}

void C作业2实验4View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void C作业2实验4View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// C作业2实验4View 诊断

#ifdef _DEBUG
void C作业2实验4View::AssertValid() const
{
	CView::AssertValid();
}

void C作业2实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业2实验4Doc* C作业2实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业2实验4Doc)));
	return (C作业2实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业2实验4View 消息处理程序


void C作业2实验4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
		CClientDC dc(this);
		CDC *pDC = GetDC();
CRect cr;
	this->GetClientRect(&cr);
CBrush Brush(RGB(123,255, 255));
CBrush *oldBrush;
oldBrush = pDC->SelectObject(&Brush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);
	
	
	CView::OnLButtonDown(nFlags, point);
}
