
// ��ҵ5-��ϰView.cpp : C��ҵ5��ϰView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��ҵ5-��ϰ.h"
#endif

#include "��ҵ5-��ϰDoc.h"
#include "��ҵ5-��ϰView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��ҵ5��ϰView

IMPLEMENT_DYNCREATE(C��ҵ5��ϰView, CView)

BEGIN_MESSAGE_MAP(C��ҵ5��ϰView, CView)
	ON_COMMAND(ID_FILE_OPEN, &C��ҵ5��ϰView::OnFileOpen)
END_MESSAGE_MAP()

// C��ҵ5��ϰView ����/����

C��ҵ5��ϰView::C��ҵ5��ϰView()
{
	// TODO: �ڴ˴���ӹ������

}

C��ҵ5��ϰView::~C��ҵ5��ϰView()
{
}

BOOL C��ҵ5��ϰView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��ҵ5��ϰView ����

void C��ҵ5��ϰView::OnDraw(CDC* pDC)
{
	C��ҵ5��ϰDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��ҵ5��ϰView ���

#ifdef _DEBUG
void C��ҵ5��ϰView::AssertValid() const
{
	CView::AssertValid();
}

void C��ҵ5��ϰView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��ҵ5��ϰDoc* C��ҵ5��ϰView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��ҵ5��ϰDoc)));
	return (C��ҵ5��ϰDoc*)m_pDocument;
}
#endif //_DEBUG


// C��ҵ5��ϰView ��Ϣ�������


void C��ҵ5��ϰView::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);  //��������
	int r = cfd.DoModal();  //�����Ի���
		CClientDC dc(this);
	if (r == IDOK)                   //����˳��Ի���ʱѡ��ΪOK�Ļ�

	{
		CString filename = cfd.GetPathName();

		dc.TextOutW(300, 200, filename);
		CImage img;
		img.Load(filename);

		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());

	}



}
