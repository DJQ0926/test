
// ��ҵ5-��ϰView.h : C��ҵ5��ϰView ��Ľӿ�
//

#pragma once


class C��ҵ5��ϰView : public CView
{
protected: // �������л�����
	C��ҵ5��ϰView();
	DECLARE_DYNCREATE(C��ҵ5��ϰView)

// ����
public:
	C��ҵ5��ϰDoc* GetDocument() const;

// ����
public:
	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��ҵ5��ϰView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // ��ҵ5-��ϰView.cpp �еĵ��԰汾
inline C��ҵ5��ϰDoc* C��ҵ5��ϰView::GetDocument() const
   { return reinterpret_cast<C��ҵ5��ϰDoc*>(m_pDocument); }
#endif

