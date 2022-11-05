
// DockablePaneTestView.h : CDockablePaneTestView クラスのインターフェイス
//


#pragma once


class CDockablePaneTestView : public CView
{
protected: // シリアル化からのみ作成します。
	CDockablePaneTestView();
	DECLARE_DYNCREATE(CDockablePaneTestView)

// 属性
public:
	CDockablePaneTestDoc* GetDocument() const;

// 操作
public:

// オーバーライド
public:
	virtual void OnDraw(CDC* pDC);  // このビューを描画するためにオーバーライドされます。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 実装
public:
	virtual ~CDockablePaneTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成された、メッセージ割り当て関数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // DockablePaneTestView.cpp のデバッグ バージョン
inline CDockablePaneTestDoc* CDockablePaneTestView::GetDocument() const
   { return reinterpret_cast<CDockablePaneTestDoc*>(m_pDocument); }
#endif

