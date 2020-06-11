
// 作业2-实验3View.cpp : C作业2实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-实验3.h"
#endif

#include "作业2-实验3Doc.h"
#include "作业2-实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业2实验3View

IMPLEMENT_DYNCREATE(C作业2实验3View, CView)

BEGIN_MESSAGE_MAP(C作业2实验3View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业2实验3View 构造/析构

C作业2实验3View::C作业2实验3View()
{
	// TODO: 在此处添加构造代码

}

C作业2实验3View::~C作业2实验3View()
{
}

BOOL C作业2实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业2实验3View 绘制

void C作业2实验3View::OnDraw(CDC* /*pDC*/)
{
	C作业2实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业2实验3View 诊断

#ifdef _DEBUG
void C作业2实验3View::AssertValid() const
{
	CView::AssertValid();
}

void C作业2实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业2实验3Doc* C作业2实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业2实验3Doc)));
	return (C作业2实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业2实验3View 消息处理程序


void C作业2实验3View::OnLButtonDown(UINT nFlags, CPoint point)
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
