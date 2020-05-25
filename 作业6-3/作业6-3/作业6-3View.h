
// 作业6-3View.h : C作业63View 类的接口
//

#pragma once


class C作业63View : public CView
{
protected: // 仅从序列化创建
	C作业63View();
	DECLARE_DYNCREATE(C作业63View)

// 特性
public:
	C作业63Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业63View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 作业6-3View.cpp 中的调试版本
inline C作业63Doc* C作业63View::GetDocument() const
   { return reinterpret_cast<C作业63Doc*>(m_pDocument); }
#endif

