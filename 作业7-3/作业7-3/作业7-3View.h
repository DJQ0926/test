
// 作业7-3View.h : C作业73View 类的接口
//

#pragma once


class C作业73View : public CView
{
protected: // 仅从序列化创建
	C作业73View();
	DECLARE_DYNCREATE(C作业73View)

// 特性
public:
	C作业73Doc* GetDocument() const;

// 操作
public:
	CRect A;
	CPen pen;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业73View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 作业7-3View.cpp 中的调试版本
inline C作业73Doc* C作业73View::GetDocument() const
   { return reinterpret_cast<C作业73Doc*>(m_pDocument); }
#endif

