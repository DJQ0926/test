
// 作业3-3View.cpp : C作业33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业3-3.h"
#endif

#include "作业3-3Doc.h"
#include "作业3-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业33View

IMPLEMENT_DYNCREATE(C作业33View, CView)

BEGIN_MESSAGE_MAP(C作业33View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业33View 构造/析构

C作业33View::C作业33View()
{
	// TODO: 在此处添加构造代码

}

C作业33View::~C作业33View()
{
}

BOOL C作业33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业33View 绘制

void C作业33View::OnDraw(CDC* pDC)
{
	C作业33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->m_crlRect);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业33View 诊断

#ifdef _DEBUG
void C作业33View::AssertValid() const
{
	CView::AssertValid();
}

void C作业33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业33Doc* C作业33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业33Doc)));
	return (C作业33Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业33View 消息处理程序


void C作业33View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C作业33Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crlRect.left > 0)
		{
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right  += 5;
		}
		break;
	case VK_UP:
		if (pDoc->m_crlRect.top > 0)
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top))
		{
			pDoc->m_crlRect.top += 5;
			pDoc->m_crlRect.bottom += 5;
		}
		break;

	case VK_ESCAPE:
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top)|| pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.top += 5;
			pDoc->m_crlRect.bottom -= 5;
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right -= 5;
		}
		break;
	

	case VK_HOME:
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top) || pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom += 5;
			pDoc->m_crlRect.left -= 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
}

InvalidateRect(NULL, TRUE);


	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void C作业33View::OnLButtonDown(UINT nFlags, CPoint point)
{

	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C作业33Doc* pDoc = GetDocument();
	if (nFlags)
	{
		pDoc->m_crlRect.top =30;
		pDoc->m_crlRect.bottom =80;
		pDoc->m_crlRect.left =30;
		pDoc->m_crlRect.right =80;
	}

	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
