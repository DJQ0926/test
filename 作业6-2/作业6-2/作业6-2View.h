
// 作业6-2View.h : C作业62View 类的接口
//

#pragma once


class C作业62View : public CView
{
protected: // 仅从序列化创建
	C作业62View();
	DECLARE_DYNCREATE(C作业62View)

// 特性
public:
	C作业62Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业62View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewAdd();
};

#ifndef _DEBUG  // 作业6-2View.cpp 中的调试版本
inline C作业62Doc* C作业62View::GetDocument() const
   { return reinterpret_cast<C作业62Doc*>(m_pDocument); }
#endif

