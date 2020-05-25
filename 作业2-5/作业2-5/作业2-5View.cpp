
// 作业2-5View.cpp : C作业25View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-5.h"
#endif

#include "作业2-5Doc.h"
#include "作业2-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业25View

IMPLEMENT_DYNCREATE(C作业25View, CView)

BEGIN_MESSAGE_MAP(C作业25View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业25View 构造/析构

C作业25View::C作业25View()
{
	// TODO: 在此处添加构造代码

}

C作业25View::~C作业25View()
{
}

BOOL C作业25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业25View 绘制

void C作业25View::OnDraw(CDC* pDC)
{
	C作业25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr1);
	pDC->Rectangle(pDoc->cr2);
	pDC->Rectangle(pDoc->cr3);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业25View 诊断

#ifdef _DEBUG
void C作业25View::AssertValid() const
{
	CView::AssertValid();
}

void C作业25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业25Doc* C作业25View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业25Doc)));
	return (C作业25Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业25View 消息处理程序


void C作业25View::OnLButtonDown(UINT nFlags, CPoint point)
{
	C作业25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CClientDC dc(this);
	;
	CString A, B, C, D;

	D = _T("点击无效");

	if (point.x > 100 && point.x < 200 && point.y>200 && point.y < 300)
	{
		pDoc->a = rand() % 50 + 5;
		A.Format(_T("a=%d"), pDoc->a);
		dc.TextOutW(150, 250, A);

	}
	else
		if (point.x > 400 && point.x < 500 && point.y>400 && point.y < 600)
		{
			pDoc->b = rand() % 50 + 5;
			B.Format(_T("b=%d"), pDoc->b);
			dc.TextOutW(450, 500, B);

		}
		else
			if (point.x > 100 && point.x < 250 && point.y>400 && point.y < 500)
			{
				pDoc->c = pDoc->a + pDoc->b;
				C.Format(_T("a+b=%d"), pDoc->c);
				dc.TextOutW(150, 450, C);


			}
			else
				dc.TextOutW(500, 300, D);


	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
}
