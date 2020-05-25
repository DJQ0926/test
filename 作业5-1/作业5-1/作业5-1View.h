
// 作业5-1View.h : C作业51View 类的接口
//

#pragma once


class C作业51View : public CView
{
protected: // 仅从序列化创建
	C作业51View();
	DECLARE_DYNCREATE(C作业51View)

// 特性
public:
	C作业51Doc* GetDocument() const;

// 操作
public:
	CRect A;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业51View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 作业5-1View.cpp 中的调试版本
inline C作业51Doc* C作业51View::GetDocument() const
   { return reinterpret_cast<C作业51Doc*>(m_pDocument); }
#endif

