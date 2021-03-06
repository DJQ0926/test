
// 作业6-3View.cpp : C作业63View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业6-3.h"
#endif

#include "作业6-3Doc.h"
#include "作业6-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业63View

IMPLEMENT_DYNCREATE(C作业63View, CView)

BEGIN_MESSAGE_MAP(C作业63View, CView)
END_MESSAGE_MAP()

// C作业63View 构造/析构

C作业63View::C作业63View()
{
	// TODO: 在此处添加构造代码

}

C作业63View::~C作业63View()
{
}

BOOL C作业63View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业63View 绘制

void C作业63View::OnDraw(CDC* /*pDC*/)
{
	C作业63Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业63View 诊断

#ifdef _DEBUG
void C作业63View::AssertValid() const
{
	CView::AssertValid();
}

void C作业63View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业63Doc* C作业63View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业63Doc)));
	return (C作业63Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业63View 消息处理程序
