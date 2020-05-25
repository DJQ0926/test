#pragma once


// link 对话框

class link : public CDialogEx
{
	DECLARE_DYNAMIC(link)

public:
	link(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~link();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString X;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	int Y;
	CString R;
	afx_msg void OnBnClickedButton1();
};
