
// DockablePaneTestDoc.cpp : CDockablePaneTestDoc クラスの実装
//

#include "stdafx.h"
#include "DockablePaneTest.h"

#include "DockablePaneTestDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDockablePaneTestDoc

IMPLEMENT_DYNCREATE(CDockablePaneTestDoc, CDocument)

BEGIN_MESSAGE_MAP(CDockablePaneTestDoc, CDocument)
END_MESSAGE_MAP()


// CDockablePaneTestDoc コンストラクション/デストラクション

CDockablePaneTestDoc::CDockablePaneTestDoc()
{
	// TODO: この位置に 1 度だけ呼ばれる構築用のコードを追加してください。

}

CDockablePaneTestDoc::~CDockablePaneTestDoc()
{
}

BOOL CDockablePaneTestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: この位置に再初期化処理を追加してください。
	// (SDI ドキュメントはこのドキュメントを再利用します。)

	return TRUE;
}




// CDockablePaneTestDoc シリアル化

void CDockablePaneTestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 格納するコードをここに追加してください。
	}
	else
	{
		// TODO: 読み込むコードをここに追加してください。
	}
}


// CDockablePaneTestDoc 診断

#ifdef _DEBUG
void CDockablePaneTestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDockablePaneTestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDockablePaneTestDoc コマンド
