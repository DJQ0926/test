
// 作业2-1View.cpp : C作业21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-1.h"
#endif

#include "作业2-1Doc.h"
#include "作业2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业21View

IMPLEMENT_DYNCREATE(C作业21View, CView)

BEGIN_MESSAGE_MAP(C作业21View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业21View 构造/析构

C作业21View::C作业21View()
{
	// TODO: 在此处添加构造代码

}

C作业21View::~C作业21View()
{
}

BOOL C作业21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业21View 绘制

void C作业21View::OnDraw(CDC* /*pDC*/)
{
	C作业21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业21View 诊断

#ifdef _DEBUG
void C作业21View::AssertValid() const
{
	CView::AssertValid();
}

void C作业21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业21Doc* C作业21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业21Doc)));
	return (C作业21Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业21View 消息处理程序


void C作业21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r;
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.Height()>cr.Width()) r = cr.Width() / 2;
	else r = cr.Height() / 2;
	int y = cr.Height() / 2;
	int x = cr.Width() / 2;
	CClientDC dc(this); //例1    客户端最大圆
	dc.Ellipse(x - r, y - r, x + r, y + r);


	CView::OnLButtonDown(nFlags, point);
}
