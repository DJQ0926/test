
// 作业7-练习2View.cpp : C作业7练习2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业7-练习2.h"
#endif

#include "作业7-练习2Doc.h"
#include "作业7-练习2View.h"
#include "mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业7练习2View

IMPLEMENT_DYNCREATE(C作业7练习2View, CView)

BEGIN_MESSAGE_MAP(C作业7练习2View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_VIEW_SHOWEDIT, &C作业7练习2View::OnViewShowedit)
END_MESSAGE_MAP()

// C作业7练习2View 构造/析构

C作业7练习2View::C作业7练习2View()
{
	// TODO: 在此处添加构造代码

}

C作业7练习2View::~C作业7练习2View()
{
}

BOOL C作业7练习2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业7练习2View 绘制

void C作业7练习2View::OnDraw(CDC* /*pDC*/)
{
	C作业7练习2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业7练习2View 诊断

#ifdef _DEBUG
void C作业7练习2View::AssertValid() const
{
	CView::AssertValid();
}

void C作业7练习2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业7练习2Doc* C作业7练习2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业7练习2Doc)));
	return (C作业7练习2Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业7练习2View 消息处理程序


void C作业7练习2View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);  //建立对象
	int r = cfd.DoModal();  //弹出对话框
	CClientDC dc(this);
	if (r == IDOK)                   //如果退出对话框时选项为OK的话

	{
		CString filename = cfd.GetPathName();

		dc.TextOutW(300, 200, filename);
		A = filename;
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C作业7练习2View::OnViewShowedit()
{
	CClientDC dc(this);
	mydlg cr;
	cr.X = A;
	UpdateData(false);
	int r = cr.DoModal();
	if (r == IDOK)
	{
		dc.TextOutW(100, 100, A);
		


	}

	// TODO: 在此添加命令处理程序代码
}
