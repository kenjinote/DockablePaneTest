
// MainFrm.h : CMainFrame �N���X�̃C���^�[�t�F�C�X
//

#pragma once

#include "DockablePaneMyTree.h"

class CMainFrame : public CFrameWndEx
{
private:
	CDockablePaneMyTree		m_dockablepaneMyTree;
	
protected: // �V���A��������̂ݍ쐬���܂��B
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// ����
public:

// ����
public:

// �I�[�o�[���C�h
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ����
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // �R���g���[�� �o�[�p�����o
	CStatusBar        m_wndStatusBar;

// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

};


