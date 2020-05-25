
// 作业3-1View.h : C作业31View 类的接口
//

#pragma once


class C作业31View : public CView
{
protected: // 仅从序列化创建
	C作业31View();
	DECLARE_DYNCREATE(C作业31View)

// 特性
public:
	C作业31Doc* GetDocument() const;

// 操作
public:
	CRect m_tagRec;
	int a1;
	int a2;
	int b1;
	int b2;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业31View();
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
};

#ifndef _DEBUG  // 作业3-1View.cpp 中的调试版本
inline C作业31Doc* C作业31View::GetDocument() const
   { return reinterpret_cast<C作业31Doc*>(m_pDocument); }
#endif

