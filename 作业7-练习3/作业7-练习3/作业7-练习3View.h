
// 作业7-练习3View.h : C作业7练习3View 类的接口
//

#pragma once


class C作业7练习3View : public CView
{
protected: // 仅从序列化创建
	C作业7练习3View();
	DECLARE_DYNCREATE(C作业7练习3View)

// 特性
public:
	C作业7练习3Doc* GetDocument() const;

// 操作
public:
	CString A;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业7练习3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnViewShowlist();
};

#ifndef _DEBUG  // 作业7-练习3View.cpp 中的调试版本
inline C作业7练习3Doc* C作业7练习3View::GetDocument() const
   { return reinterpret_cast<C作业7练习3Doc*>(m_pDocument); }
#endif

