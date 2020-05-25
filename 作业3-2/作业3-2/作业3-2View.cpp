
// 作业3-2View.cpp : C作业32View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业3-2.h"
#endif

#include "作业3-2Doc.h"
#include "作业3-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业32View

IMPLEMENT_DYNCREATE(C作业32View, CView)

BEGIN_MESSAGE_MAP(C作业32View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C作业32View 构造/析构

C作业32View::C作业32View()
{
	// TODO: 在此处添加构造代码

}

C作业32View::~C作业32View()
{
}

BOOL C作业32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业32View 绘制

void C作业32View::OnDraw(CDC* pDC)
{
	C作业32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPoint point(20, 20);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->m_Point);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业32View 诊断

#ifdef _DEBUG
void C作业32View::AssertValid() const
{
	CView::AssertValid();
}

void C作业32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业32Doc* C作业32View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业32Doc)));
	return (C作业32Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业32View 消息处理程序

void C作业32View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C作业32Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString A;
	A.Format(_T("鼠标按下时：%d，%d"), point.x,point.y);
	dc.TextOutW(200, 20, A);
		a1 = point.x;
		a2 = point.y;
	CView::OnLButtonDown(nFlags, point);
}

void C作业32View::OnMouseMove(UINT nFlags, CPoint point)
{
	C作业32Doc* pDoc = GetDocument();
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	pDoc->m_Point = point;
	InvalidateRect(NULL, FALSE);
	pDoc->count += 1;
	

	CView::OnMouseMove(nFlags, point);
}




void C作业32View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C作业32Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString B;
	CString C;
	CString D;
		b1 = point.x;
		b2 = point.y;
		dis = sqrt((a1 - b1)*(a1 - b1) + (a2 - b2)*(a2 - b2));
		sum = (double)dis/pDoc->count ;
		D.Format(_T("距离位：%d"), dis);
		B.Format(_T("当鼠标抬起时：%d,%d"), point.x, point.y);
		dc.TextOutW(200, 40, B);
		C.Format(_T("MOVE了%d次,平均%.6f个像素移动一次"), pDoc->count, sum);
		dc.TextOutW(200, 60, C);
		pDoc->count = 0;
		InvalidateRect(NULL, FALSE);
	CView::OnLButtonUp(nFlags, point);
}
