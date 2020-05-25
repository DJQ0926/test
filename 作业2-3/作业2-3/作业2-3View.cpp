
// 作业2-3View.cpp : C作业23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-3.h"
#endif

#include "作业2-3Doc.h"
#include "作业2-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业23View

IMPLEMENT_DYNCREATE(C作业23View, CView)

BEGIN_MESSAGE_MAP(C作业23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C作业23View 构造/析构

C作业23View::C作业23View()
{
	// TODO: 在此处添加构造代码

}

C作业23View::~C作业23View()
{
}

BOOL C作业23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业23View 绘制

void C作业23View::OnDraw(CDC* /*pDC*/)
{
	C作业23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业23View 诊断

#ifdef _DEBUG
void C作业23View::AssertValid() const
{
	CView::AssertValid();
}

void C作业23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业23Doc* C作业23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业23Doc)));
	return (C作业23Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业23View 消息处理程序


void C作业23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s.Format(_T("左键正被按下"));
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, s);
	CView::OnLButtonDown(nFlags, point);
}


void C作业23View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString k;
	k.Format(_T("左键正在抬起"));
	CClientDC dc(this);
	dc.TextOutW(point.x, point.y, k);
	CView::OnLButtonUp(nFlags, point);
}
