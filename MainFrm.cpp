
// MainFrm.cpp : CMainFrame クラスの実装
//

#include "stdafx.h"
#include "DockablePaneTest.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWndEx)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWndEx)
	ON_WM_CREATE()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ステータス ライン インジケータ
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame コンストラクション/デストラクション

CMainFrame::CMainFrame()
{
	// TODO: メンバ初期化コードをここに追加してください。
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWndEx::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("ステータス バーの作成に失敗しました。\n");
		return -1;      // 作成できない場合
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// ドッキングペインの作成
	if( !m_dockablepaneMyTree.Create(	_T("マイツリー"),
										this,
										CRect(0, 0, 200, 200),
										TRUE,
										1,	// 子ウィンドウのＩＤは、このクラス内の子ウィンドウ間でバッティングしなければ何でも良い。
										WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_LEFT| CBRS_FLOAT_MULTI ) )
	{
		return -1;
	}

	// ドッキング
	CDockingManager::SetDockingMode(DT_SMART);	// Visual Studio 2005 スタイルのドッキング ウィンドウ動作を有効にします
	EnableAutoHidePanes(CBRS_ALIGN_ANY);	// Visual Studio 2005 スタイルのドッキング ウィンドウの自動非表示動作を有効にします
	m_dockablepaneMyTree.EnableDocking(CBRS_ALIGN_ANY);
	DockPane(&m_dockablepaneMyTree);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWndEx::PreCreateWindow(cs) )
		return FALSE;
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return TRUE;
}

// CMainFrame 診断

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWndEx::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWndEx::Dump(dc);
}
#endif //_DEBUG


// CMainFrame メッセージ ハンドラ
