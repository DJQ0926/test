
// 作业6-4View.h : C作业64View 类的接口
//

#pragma once


class C作业64View : public CView
{
protected: // 仅从序列化创建
	C作业64View();
	DECLARE_DYNCREATE(C作业64View)

// 特性
public:
	C作业64Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业64View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewLink();
};

#ifndef _DEBUG  // 作业6-4View.cpp 中的调试版本
inline C作业64Doc* C作业64View::GetDocument() const
   { return reinterpret_cast<C作业64Doc*>(m_pDocument); }
#endif

