
// 作业5-练习View.cpp : C作业5练习View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "作业5-练习.h"
#endif

#include "作业5-练习Doc.h"
#include "作业5-练习View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C作业5练习View

IMPLEMENT_DYNCREATE(C作业5练习View, CView)

BEGIN_MESSAGE_MAP(C作业5练习View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C作业5练习View::OnFileOpen)
END_MESSAGE_MAP()

// C作业5练习View 构造/析构

C作业5练习View::C作业5练习View()
{
	// TODO: 在此处添加构造代码

}

C作业5练习View::~C作业5练习View()
{
}

BOOL C作业5练习View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C作业5练习View 绘制

void C作业5练习View::OnDraw(CDC* pDC)
{
	C作业5练习Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	// TODO: 在此处为本机数据添加绘制代码
}


// C作业5练习View 诊断

#ifdef _DEBUG
void C作业5练习View::AssertValid() const
{
	CView::AssertValid();
}

void C作业5练习View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C作业5练习Doc* C作业5练习View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C作业5练习Doc)));
	return (C作业5练习Doc*)m_pDocument;
}
#endif //_DEBUG


// C作业5练习View 消息处理程序


void C作业5练习View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);  //建立对象
	int r = cfd.DoModal();  //弹出对话框
		CClientDC dc(this);
	if (r == IDOK)                   //如果退出对话框时选项为OK的话

	{
		CString filename = cfd.GetPathName();

		dc.TextOutW(300, 200, filename);
		CImage img;
		img.Load(filename);

		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());

	}



}
