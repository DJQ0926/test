
// 作业2-实验1View.cpp : C作业2实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业2-实验1.h"
#endif

#include "作业2-实验1Doc.h"
#include "作业2-实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业2实验1View

IMPLEMENT_DYNCREATE(C作业2实验1View, CView)

BEGIN_MESSAGE_MAP(C作业2实验1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C作业2实验1View 构造/析构

C作业2实验1View::C作业2实验1View()
{
	// TODO: 在此处添加构造代码

}

C作业2实验1View::~C作业2实验1View()
{
}

BOOL C作业2实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业2实验1View 绘制

void C作业2实验1View::OnDraw(CDC* pDC)
{
	C作业2实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i <pDoc->ca.GetSize(); i++)
		pDC->Ellipse(pDoc->ca.GetAt(i));

	// TODO: 在此处为本机数据添加绘制代码
}


// C作业2实验1View 打印

BOOL C作业2实验1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C作业2实验1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C作业2实验1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C作业2实验1View 诊断

#ifdef _DEBUG
void C作业2实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C作业2实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业2实验1Doc* C作业2实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业2实验1Doc)));
	return (C作业2实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业2实验1View 消息处理程序


void C作业2实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int a = rand() % 50 + 5;
	

	CRect cr(point.x - a, point.y - a, point.x + a, point.y + a);     //例二   随机椭圆
	C作业2实验1Doc* pDoc = GetDocument();
	pDoc->ca.Add(cr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
