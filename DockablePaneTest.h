
// DockablePaneTest.h : DockablePaneTest アプリケーションのメイン ヘッダー ファイル
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"       // メイン シンボル


// CDockablePaneTestApp:
// このクラスの実装については、DockablePaneTest.cpp を参照してください。
//

class CDockablePaneTestApp : public CWinApp
{
public:
	CDockablePaneTestApp();


// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装
	afx_msg void OnAppAbout();
	afx_msg void OnViewMyTree();
	DECLARE_MESSAGE_MAP()
};

extern CDockablePaneTestApp theApp;
