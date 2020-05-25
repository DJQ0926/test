
// 作业3-1View.cpp : C作业31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业3-1.h"
#endif

#include "作业3-1Doc.h"
#include "作业3-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业31View

IMPLEMENT_DYNCREATE(C作业31View, CView)

BEGIN_MESSAGE_MAP(C作业31View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C作业31View 构造/析构

C作业31View::C作业31View()
{
	m_tagRec.left = a1;
	m_tagRec.top= a2;
	m_tagRec.right = b1;
	m_tagRec.bottom = b2;
	
	// TODO: 在此处添加构造代码

}

C作业31View::~C作业31View()
{
}

BOOL C作业31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业31View 绘制

void C作业31View::OnDraw(CDC* pDC)
{
	C作业31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(m_tagRec);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业31View 诊断

#ifdef _DEBUG
void C作业31View::AssertValid() const
{
	CView::AssertValid();
}

void C作业31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业31Doc* C作业31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业31Doc)));
	return (C作业31Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业31View 消息处理程序


void C作业31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString S;
	S.Format(_T("%d,%d"), point.x, point.y);
	dc.TextOutW(point.x, point.y, S);
	 a1 = point.x;
	 a2 = point.y;
	CView::OnLButtonDown(nFlags, point);
}




void C作业31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString K;
	K.Format(_T("%d,%d"), point.x, point.y);
	dc.TextOutW(point.x, point.y, K);
	 b1 = point.x;
	 b2 = point.y;
	 m_tagRec.left = a1;
	 m_tagRec.top = a2;
	 m_tagRec.right = b1;
	 m_tagRec.bottom = b2;
	 Invalidate();
	CView::OnLButtonUp(nFlags, point);
}
