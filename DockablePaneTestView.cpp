
// DockablePaneTestView.cpp : CDockablePaneTestView �N���X�̎���
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

// CDockablePaneTestView �R���X�g���N�V����/�f�X�g���N�V����

CDockablePaneTestView::CDockablePaneTestView()
{
	// TODO: �\�z�R�[�h�������ɒǉ����܂��B

}

CDockablePaneTestView::~CDockablePaneTestView()
{
}

BOOL CDockablePaneTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: ���̈ʒu�� CREATESTRUCT cs ���C������ Window �N���X�܂��̓X�^�C����
	//  �C�����Ă��������B

	return CView::PreCreateWindow(cs);
}

// CDockablePaneTestView �`��

void CDockablePaneTestView::OnDraw(CDC* /*pDC*/)
{
	CDockablePaneTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���̏ꏊ�Ƀl�C�e�B�u �f�[�^�p�̕`��R�[�h��ǉ����܂��B
}


// CDockablePaneTestView �f�f

#ifdef _DEBUG
void CDockablePaneTestView::AssertValid() const
{
	CView::AssertValid();
}

void CDockablePaneTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDockablePaneTestDoc* CDockablePaneTestView::GetDocument() const // �f�o�b�O�ȊO�̃o�[�W�����̓C�����C���ł��B
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDockablePaneTestDoc)));
	return (CDockablePaneTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CDockablePaneTestView ���b�Z�[�W �n���h��
