
// 作业4-2View.cpp : C作业42View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业4-2.h"
#endif

#include "作业4-2Doc.h"
#include "作业4-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业42View

IMPLEMENT_DYNCREATE(C作业42View, CView)

BEGIN_MESSAGE_MAP(C作业42View, CView)
END_MESSAGE_MAP()

// C作业42View 构造/析构

C作业42View::C作业42View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

C作业42View::~C作业42View()
{
}

BOOL C作业42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业42View 绘制

void C作业42View::OnDraw(CDC* pDC)
{
	C作业42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业42View 诊断

#ifdef _DEBUG
void C作业42View::AssertValid() const
{
	CView::AssertValid();
}

void C作业42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业42Doc* C作业42View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业42Doc)));
	return (C作业42Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业42View 消息处理程序
