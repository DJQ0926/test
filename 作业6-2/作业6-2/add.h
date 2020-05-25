#pragma once


// add 对话框

class add : public CDialogEx
{
	DECLARE_DYNAMIC(add)

public:
	add(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~add();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int x;
	int y;
	afx_msg void OnEnChangeEdit3();
	int r;
	afx_msg void OnBnClickedButton1();
};
