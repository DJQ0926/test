
// 作业7-4View.cpp : C作业74View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业7-4.h"
#endif

#include "作业7-4Doc.h"
#include "作业7-4View.h"
#include "color.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业74View

IMPLEMENT_DYNCREATE(C作业74View, CView)

BEGIN_MESSAGE_MAP(C作业74View, CView)
	ON_COMMAND(ID_VIEW_COLOR, &C作业74View::OnViewColor)
	ON_BN_CLICKED(IDC_BUTTON1, &C作业74View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C作业74View 构造/析构

C作业74View::C作业74View()
{
	A.top = 100;
	A.left = 200;
	A.bottom = 400;
	A.right = 700;
	// TODO: 在此处添加构造代码
}

C作业74View::~C作业74View()
{ 
}

BOOL C作业74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业74View 绘制

void C作业74View::OnDraw(CDC* pDC)
{
	C作业74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(A);

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业74View 诊断

#ifdef _DEBUG
void C作业74View::AssertValid() const
{
	CView::AssertValid();
}

void C作业74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业74Doc* C作业74View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业74Doc)));
	return (C作业74Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业74View 消息处理程序


void C作业74View::OnViewColor()
{
	color cp;
	int r = cp.DoModal();
	if (r == IDOK)
	{
		CClientDC dc(this);
		CBrush pNewBrush(RGB(cp.x, cp.y, cp.z));
		CBrush *pOldBrush = dc.SelectObject(&pNewBrush);
		dc.Ellipse(A);//
		dc.SelectObject(pOldBrush);



	}
	// TODO: 在此添加命令处理程序代码
}


void C作业74View::OnBnClickedButton1()
{  




	// TODO: 在此添加控件通知处理程序代码
}
