
// 作业4-2View.h : C作业42View 类的接口
//

#pragma once


class C作业42View : public CView
{
protected: // 仅从序列化创建
	C作业42View();
	DECLARE_DYNCREATE(C作业42View)

// 特性
public:
	C作业42Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C作业42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 作业4-2View.cpp 中的调试版本
inline C作业42Doc* C作业42View::GetDocument() const
   { return reinterpret_cast<C作业42Doc*>(m_pDocument); }
#endif

