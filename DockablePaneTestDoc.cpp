
// DockablePaneTestDoc.cpp : CDockablePaneTestDoc �N���X�̎���
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


// CDockablePaneTestDoc �R���X�g���N�V����/�f�X�g���N�V����

CDockablePaneTestDoc::CDockablePaneTestDoc()
{
	// TODO: ���̈ʒu�� 1 �x�����Ă΂��\�z�p�̃R�[�h��ǉ����Ă��������B

}

CDockablePaneTestDoc::~CDockablePaneTestDoc()
{
}

BOOL CDockablePaneTestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���̈ʒu�ɍď�����������ǉ����Ă��������B
	// (SDI �h�L�������g�͂��̃h�L�������g���ė��p���܂��B)

	return TRUE;
}




// CDockablePaneTestDoc �V���A����

void CDockablePaneTestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �i�[����R�[�h�������ɒǉ����Ă��������B
	}
	else
	{
		// TODO: �ǂݍ��ރR�[�h�������ɒǉ����Ă��������B
	}
}


// CDockablePaneTestDoc �f�f

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


// CDockablePaneTestDoc �R�}���h
