
// 作业5-1View.cpp : C作业51View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业5-1.h"
#endif

#include "作业5-1Doc.h"
#include "作业5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业51View

IMPLEMENT_DYNCREATE(C作业51View, CView)

BEGIN_MESSAGE_MAP(C作业51View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业51View 构造/析构

C作业51View::C作业51View()
{
	// TODO: 在此处添加构造代码
	A.top = 190;
	A.left = 190;
	A.bottom = 500;
	A.right = 510;
}

C作业51View::~C作业51View()
{
}

BOOL C作业51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业51View 绘制

void C作业51View::OnDraw(CDC* pDC)
{
	C作业51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(A);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业51View 诊断

#ifdef _DEBUG
void C作业51View::AssertValid() const
{
	CView::AssertValid();
}

void C作业51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业51Doc* C作业51View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业51Doc)));
	return (C作业51Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业51View 消息处理程序
int i = 1;
CString s;
int x;
int y;

void C作业51View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString ch;
	CClientDC dc(this);



	int position;
	int flag;
	CRect Rect(200, 200, 500, 500);

	ch.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200) {
		position = (x - 200) / 10 + (y - 200) / 20 * 30;

		s.Insert(position, nChar);
	}
	else {
		s.Append(ch);
	}
	

	dc.DrawText(s, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);


	CView::OnChar(nChar, nRepCnt, nFlags);
}


void C作业51View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x = point.x;
	y = point.y;

	CView::OnLButtonDown(nFlags, point);
}
