
// 作业2-实验3View.h : C作业2实验3View 类的接口
//

#pragma once


class C作业2实验3View : public CView
{
protected: // 仅从序列化创建
	C作业2实验3View();
	DECLARE_DYNCREATE(C作业2实验3View)

// 特性
public:
	C作业2实验3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业2实验3View();
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

#ifndef _DEBUG  // 作业2-实验3View.cpp 中的调试版本
inline C作业2实验3Doc* C作业2实验3View::GetDocument() const
   { return reinterpret_cast<C作业2实验3Doc*>(m_pDocument); }
#endif

