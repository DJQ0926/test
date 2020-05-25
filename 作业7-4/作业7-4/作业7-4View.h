
// 作业7-4View.h : C作业74View 类的接口
//

#pragma once


class C作业74View : public CView
{
protected: // 仅从序列化创建
	C作业74View();
	DECLARE_DYNCREATE(C作业74View)

// 特性
public:
	C作业74Doc* GetDocument() const;

// 操作
public:CRect A;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业74View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewColor();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 作业7-4View.cpp 中的调试版本
inline C作业74Doc* C作业74View::GetDocument() const
   { return reinterpret_cast<C作业74Doc*>(m_pDocument); }
#endif

