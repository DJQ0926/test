
// 作业3-4View.cpp : C作业34View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业3-4.h"
#endif

#include "作业3-4Doc.h"
#include "作业3-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业34View

IMPLEMENT_DYNCREATE(C作业34View, CView)

BEGIN_MESSAGE_MAP(C作业34View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C作业34View 构造/析构

C作业34View::C作业34View()
{
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
	// TODO: 在此处添加构造代码

}

C作业34View::~C作业34View()
{
}

BOOL C作业34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业34View 绘制

void C作业34View::OnDraw(CDC* pDC)
{
	C作业34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);
		
		}


		// TODO: 在此处为本机数据添加绘制代码
		for (int i = 0; i < N; i++)
		{
			pDC->Ellipse(cr[i]);
		}
	}
}


// C作业34View 诊断

#ifdef _DEBUG
void C作业34View::AssertValid() const
{
	CView::AssertValid();
}

void C作业34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业34Doc* C作业34View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业34Doc)));
	return (C作业34Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业34View 消息处理程序


void C作业34View::OnTimer(UINT_PTR nIDEvent)
{
	CRect ccr;
	GetClientRect(&ccr);
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	int  flag = 1;
	if(flag>0)
	{
		cr[i].top += 30;
		cr[i].bottom += 30;
	}
	else
	{
		cr[i].top -= 30;
		cr[i].bottom -= 30;
	}
if (cr[i].bottom >= ccr.bottom)
{
	flag = -1;
}


	Invalidate();



	CView::OnTimer(nIDEvent);
}
