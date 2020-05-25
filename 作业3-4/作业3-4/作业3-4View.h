
// 作业3-4View.h : C作业34View 类的接口
//

#pragma once


class C作业34View : public CView
{
protected: // 仅从序列化创建
	C作业34View();
	DECLARE_DYNCREATE(C作业34View)

// 特性
public:
	C作业34Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect, CRect>cr;
	bool set;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业34View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 作业3-4View.cpp 中的调试版本
inline C作业34Doc* C作业34View::GetDocument() const
   { return reinterpret_cast<C作业34Doc*>(m_pDocument); }
#endif

