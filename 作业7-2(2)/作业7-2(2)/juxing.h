#pragma once


// juxing 对话框

class juxing : public CDialogEx
{
	DECLARE_DYNAMIC(juxing)

public:
	juxing(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~juxing();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	int top;
	int left;
	int bottom;
	int right;
	afx_msg void OnBnClickedButton1();
};
