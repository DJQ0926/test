
// 作业7-2(2)View.h : C作业722View 类的接口
//

#pragma once


class C作业722View : public CView
{
protected: // 仅从序列化创建
	C作业722View();
	DECLARE_DYNCREATE(C作业722View)

// 特性
public:
	C作业722Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业722View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowjuxing();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 作业7-2(2)View.cpp 中的调试版本
inline C作业722Doc* C作业722View::GetDocument() const
   { return reinterpret_cast<C作业722Doc*>(m_pDocument); }
#endif

