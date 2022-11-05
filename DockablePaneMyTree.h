#pragma once


// CDockablePaneMyTree

class CDockablePaneMyTree : public CDockablePane
{
private:
	CTreeCtrl		m_treectrlMyTree;

	DECLARE_DYNAMIC(CDockablePaneMyTree)

public:
	CDockablePaneMyTree();
	virtual ~CDockablePaneMyTree();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};


