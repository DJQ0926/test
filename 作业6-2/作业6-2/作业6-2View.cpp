
// 作业6-2View.cpp : C作业62View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业6-2.h"
#endif

#include "作业6-2Doc.h"
#include "作业6-2View.h"
#include "add.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业62View

IMPLEMENT_DYNCREATE(C作业62View, CView)

BEGIN_MESSAGE_MAP(C作业62View, CView)
	ON_COMMAND(ID_VIEW_ADD, &C作业62View::OnViewAdd)
END_MESSAGE_MAP()

// C作业62View 构造/析构

C作业62View::C作业62View()
{
	// TODO: 在此处添加构造代码

}

C作业62View::~C作业62View()
{
}

BOOL C作业62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业62View 绘制

void C作业62View::OnDraw(CDC* /*pDC*/)
{
	C作业62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业62View 诊断

#ifdef _DEBUG
void C作业62View::AssertValid() const
{
	CView::AssertValid();
}

void C作业62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业62Doc* C作业62View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业62Doc)));
	return (C作业62Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业62View 消息处理程序


void C作业62View::OnViewAdd()
{
	add *cp = new add;
	cp->Create(IDD_DIALOG1);
	cp->ShowWindow(1);
	// TODO: 在此添加命令处理程序代码
}
