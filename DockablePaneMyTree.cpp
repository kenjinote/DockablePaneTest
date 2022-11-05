// DockablePaneMyTree.cpp : 実装ファイル
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



// CDockablePaneMyTree メッセージ ハンドラ



int CDockablePaneMyTree::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ここに特定な作成コードを追加してください。

	// ドッキングペインに入れるコントロールの作成
	const DWORD dwViewStyle = WS_CHILD | WS_VISIBLE
							| TVS_HASLINES		// ライン
							| TVS_LINESATROOT	// ルートへのライン
							| TVS_HASBUTTONS;	// 「＋」「－」ボタン
	if( !m_treectrlMyTree.Create(	dwViewStyle,
									CRect(0, 0, 0, 0),
									this,
									1 ) )	// 子ウィンドウのＩＤは、このクラス内の子ウィンドウ間でバッティングしなければ何でも良い。
	{
		return -1;
	}

	// ダミーデータ登録
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

	// TODO: ここにメッセージ ハンドラ コードを追加します。

	// 「ドッキングペインに入れるコントロール」のドッキングペインに対する位置あわせ
	CRect rectClient;
	GetClientRect(rectClient);
	m_treectrlMyTree.SetWindowPos(	NULL,
									rectClient.left		+ 1,	// 境界線用に開始位置を1ずらす
									rectClient.top		+ 1,	// 境界線用に開始位置を1ずらす
									rectClient.Width()	- 2,	// 境界線用に大きさを2小さく作る
									rectClient.Height()	- 2,	// 境界線用に大きさを2小さく作る
									SWP_NOACTIVATE | SWP_NOZORDER);
}

void CDockablePaneMyTree::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: ここにメッセージ ハンドラ コードを追加します。
	// 描画メッセージで CDockablePane::OnPaint() を呼び出さないでください。

	CRect rectClient;
	GetClientRect(rectClient);
	dc.Draw3dRect(rectClient, ::GetSysColor(COLOR_3DSHADOW), ::GetSysColor(COLOR_3DSHADOW));
}

void CDockablePaneMyTree::OnSetFocus(CWnd* pOldWnd)
{
	CDockablePane::OnSetFocus(pOldWnd);

	// TODO: ここにメッセージ ハンドラ コードを追加します。
	m_treectrlMyTree.SetFocus();
}
