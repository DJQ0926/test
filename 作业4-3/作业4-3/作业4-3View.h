
// 作业4-3View.h : C作业43View 类的接口
//

#pragma once


class C作业43View : public CView
{
protected: // 仅从序列化创建
	C作业43View();
	DECLARE_DYNCREATE(C作业43View)

// 特性
public:
	C作业43Doc* GetDocument() const;

// 操作
public:
	int x1;
	int x2;
	int y1;
	int y2;
	CPoint start;
	int n;
	CRect A;
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawellipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 作业4-3View.cpp 中的调试版本
inline C作业43Doc* C作业43View::GetDocument() const
   { return reinterpret_cast<C作业43Doc*>(m_pDocument); }
#endif

