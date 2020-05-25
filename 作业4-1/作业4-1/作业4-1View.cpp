
// 作业4-1View.cpp : C作业41View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业4-1.h"
#endif

#include "作业4-1Doc.h"
#include "作业4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业41View

IMPLEMENT_DYNCREATE(C作业41View, CView)

BEGIN_MESSAGE_MAP(C作业41View, CView)
	ON_COMMAND(ID_SHOWNAME, &C作业41View::OnShowname)
END_MESSAGE_MAP()

// C作业41View 构造/析构

C作业41View::C作业41View()
{
	// TODO: 在此处添加构造代码

}

C作业41View::~C作业41View()
{
}

BOOL C作业41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业41View 绘制

void C作业41View::OnDraw(CDC* /*pDC*/)
{
	C作业41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业41View 诊断

#ifdef _DEBUG
void C作业41View::AssertValid() const
{
	CView::AssertValid();
}

void C作业41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业41Doc* C作业41View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业41Doc)));
	return (C作业41Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业41View 消息处理程序


void C作业41View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s=_T("邓家庆");
	CClientDC dc(this);
	dc.TextOutW(300, 300, s);
}
