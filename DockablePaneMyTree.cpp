// DockablePaneMyTree.cpp : �����t�@�C��
//

#include "stdafx.h"
#include "DockablePaneTest.h"
#include "DockablePaneMyTree.h"


// CDockablePaneMyTree

IMPLEMENT_DYNAMIC(CDockablePaneMyTree, CDockablePane)

CDockablePaneMyTree::CDockablePaneMyTree()
{

}

CDockablePaneMyTree::~CDockablePaneMyTree()
{
}

BEGIN_MESSAGE_MAP(CDockablePaneMyTree, CDockablePane)
	ON_WM_CREATE()
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()



// CDockablePaneMyTree ���b�Z�[�W �n���h��



int CDockablePaneMyTree::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �����ɓ���ȍ쐬�R�[�h��ǉ����Ă��������B

	// �h�b�L���O�y�C���ɓ����R���g���[���̍쐬
	const DWORD dwViewStyle = WS_CHILD | WS_VISIBLE
							| TVS_HASLINES		// ���C��
							| TVS_LINESATROOT	// ���[�g�ւ̃��C��
							| TVS_HASBUTTONS;	// �u�{�v�u�|�v�{�^��
	if( !m_treectrlMyTree.Create(	dwViewStyle,
									CRect(0, 0, 0, 0),
									this,
									1 ) )	// �q�E�B���h�E�̂h�c�́A���̃N���X���̎q�E�B���h�E�ԂŃo�b�e�B���O���Ȃ���Ή��ł��ǂ��B
	{
		return -1;
	}

	// �_�~�[�f�[�^�o�^
	HTREEITEM hRoot = m_treectrlMyTree.InsertItem(_T("root"));
	m_treectrlMyTree.SetItemState(hRoot, TVIS_BOLD, TVIS_BOLD);
	HTREEITEM hSub1 = m_treectrlMyTree.InsertItem(_T("AAA"), hRoot);
	m_treectrlMyTree.InsertItem(_T("BBB"), hSub1);
	m_treectrlMyTree.InsertItem(_T("CCC"), hSub1);
	m_treectrlMyTree.InsertItem(_T("DDD"), hSub1);
	HTREEITEM hSub2 = m_treectrlMyTree.InsertItem(_T("EEEE"), hRoot);
	m_treectrlMyTree.InsertItem(_T("FFF"), hSub2);
	m_treectrlMyTree.InsertItem(_T("GGG"), hSub2);
	m_treectrlMyTree.InsertItem(_T("HHH"), hSub2);
	HTREEITEM hSub3 = m_treectrlMyTree.InsertItem(_T("III"), hRoot);
	m_treectrlMyTree.InsertItem(_T("JJJ"), hSub3);
	m_treectrlMyTree.InsertItem(_T("KKK"), hSub3);
	m_treectrlMyTree.InsertItem(_T("LLL"), hSub3);
	m_treectrlMyTree.Expand(hRoot, TVE_EXPAND);
	m_treectrlMyTree.Expand(hSub1, TVE_EXPAND);
	//m_treectrlMyTree.Expand(hSub2, TVE_EXPAND);
	m_treectrlMyTree.Expand(hSub3, TVE_EXPAND);

	return 0;
}

void CDockablePaneMyTree::OnSize(UINT nType, int cx, int cy)
{
	CDockablePane::OnSize(nType, cx, cy);

	// TODO: �����Ƀ��b�Z�[�W �n���h�� �R�[�h��ǉ����܂��B

	// �u�h�b�L���O�y�C���ɓ����R���g���[���v�̃h�b�L���O�y�C���ɑ΂���ʒu���킹
	CRect rectClient;
	GetClientRect(rectClient);
	m_treectrlMyTree.SetWindowPos(	NULL,
									rectClient.left		+ 1,	// ���E���p�ɊJ�n�ʒu��1���炷
									rectClient.top		+ 1,	// ���E���p�ɊJ�n�ʒu��1���炷
									rectClient.Width()	- 2,	// ���E���p�ɑ傫����2���������
									rectClient.Height()	- 2,	// ���E���p�ɑ傫����2���������
									SWP_NOACTIVATE | SWP_NOZORDER);
}

void CDockablePaneMyTree::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: �����Ƀ��b�Z�[�W �n���h�� �R�[�h��ǉ����܂��B
	// �`�惁�b�Z�[�W�� CDockablePane::OnPaint() ���Ăяo���Ȃ��ł��������B

	CRect rectClient;
	GetClientRect(rectClient);
	dc.Draw3dRect(rectClient, ::GetSysColor(COLOR_3DSHADOW), ::GetSysColor(COLOR_3DSHADOW));
}

void CDockablePaneMyTree::OnSetFocus(CWnd* pOldWnd)
{
	CDockablePane::OnSetFocus(pOldWnd);

	// TODO: �����Ƀ��b�Z�[�W �n���h�� �R�[�h��ǉ����܂��B
	m_treectrlMyTree.SetFocus();
}
