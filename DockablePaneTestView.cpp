
// DockablePaneTestView.cpp : CDockablePaneTestView クラスの実装
//

#include "stdafx.h"
#include "DockablePaneTest.h"

#include "DockablePaneTestDoc.h"
#include "DockablePaneTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDockablePaneTestView

IMPLEMENT_DYNCREATE(CDockablePaneTestView, CView)

BEGIN_MESSAGE_MAP(CDockablePaneTestView, CView)
END_MESSAGE_MAP()

// CDockablePaneTestView コンストラクション/デストラクション

CDockablePaneTestView::CDockablePaneTestView()
{
	// TODO: 構築コードをここに追加します。

}

CDockablePaneTestView::~CDockablePaneTestView()
{
}

BOOL CDockablePaneTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return CView::PreCreateWindow(cs);
}

// CDockablePaneTestView 描画

void CDockablePaneTestView::OnDraw(CDC* /*pDC*/)
{
	CDockablePaneTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: この場所にネイティブ データ用の描画コードを追加します。
}


// CDockablePaneTestView 診断

#ifdef _DEBUG
void CDockablePaneTestView::AssertValid() const
{
	CView::AssertValid();
}

void CDockablePaneTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDockablePaneTestDoc* CDockablePaneTestView::GetDocument() const // デバッグ以外のバージョンはインラインです。
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDockablePaneTestDoc)));
	return (CDockablePaneTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CDockablePaneTestView メッセージ ハンドラ
