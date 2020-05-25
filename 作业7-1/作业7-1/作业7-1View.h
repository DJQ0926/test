
// 作业7-1View.h : C作业71View 类的接口
//

#pragma once


class C作业71View : public CView
{
protected: // 仅从序列化创建
	C作业71View();
	DECLARE_DYNCREATE(C作业71View)

// 特性
public:
	C作业71Doc* GetDocument() const;

// 操作
public:CString a;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewCalculator();
};

#ifndef _DEBUG  // 作业7-1View.cpp 中的调试版本
inline C作业71Doc* C作业71View::GetDocument() const
   { return reinterpret_cast<C作业71Doc*>(m_pDocument); }
#endif

