
// 作业6-4View.cpp : C作业64View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业6-4.h"
#endif

#include "作业6-4Doc.h"
#include "作业6-4View.h"
#include "link.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业64View

IMPLEMENT_DYNCREATE(C作业64View, CView)

BEGIN_MESSAGE_MAP(C作业64View, CView)
	ON_COMMAND(ID_VIEW_LINK, &C作业64View::OnViewLink)
END_MESSAGE_MAP()

// C作业64View 构造/析构

C作业64View::C作业64View()
{
	// TODO: 在此处添加构造代码

}

C作业64View::~C作业64View()
{
}

BOOL C作业64View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业64View 绘制

void C作业64View::OnDraw(CDC* /*pDC*/)
{
	C作业64Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业64View 诊断

#ifdef _DEBUG
void C作业64View::AssertValid() const
{
	CView::AssertValid();
}

void C作业64View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业64Doc* C作业64View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业64Doc)));
	return (C作业64Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业64View 消息处理程序


void C作业64View::OnViewLink()
{
	link *cr = new link();
	cr->Create(IDD_DIALOG1);
	cr->ShowWindow(1);
	
	
	// TODO: 在此添加命令处理程序代码
}
