
// 作业7-2(1)View.h : C作业721View 类的接口
//

#pragma once


class C作业721View : public CView
{
protected: // 仅从序列化创建
	C作业721View();
	DECLARE_DYNCREATE(C作业721View)

// 特性
public:
	C作业721Doc* GetDocument() const;

// 操作
public:
	int x1;
	int y1;
	int x2;
	int y2;
	CRect A;
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业721View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 作业7-2(1)View.cpp 中的调试版本
inline C作业721Doc* C作业721View::GetDocument() const
   { return reinterpret_cast<C作业721Doc*>(m_pDocument); }
#endif

