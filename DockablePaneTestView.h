
// DockablePaneTestView.h : CDockablePaneTestView �N���X�̃C���^�[�t�F�C�X
//


#pragma once


class CDockablePaneTestView : public CView
{
protected: // �V���A��������̂ݍ쐬���܂��B
	CDockablePaneTestView();
	DECLARE_DYNCREATE(CDockablePaneTestView)

// ����
public:
	CDockablePaneTestDoc* GetDocument() const;

// ����
public:

// �I�[�o�[���C�h
public:
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷�邽�߂ɃI�[�o�[���C�h����܂��B
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ����
public:
	virtual ~CDockablePaneTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // DockablePaneTestView.cpp �̃f�o�b�O �o�[�W����
inline CDockablePaneTestDoc* CDockablePaneTestView::GetDocument() const
   { return reinterpret_cast<CDockablePaneTestDoc*>(m_pDocument); }
#endif
