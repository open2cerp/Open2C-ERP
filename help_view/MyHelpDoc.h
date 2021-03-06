// MyHelpDoc.h : interface of the CMyHelpDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYHELPDOC_H__45322AF9_0C80_4FFA_855F_2B5F21A3B65D__INCLUDED_)
#define AFX_MYHELPDOC_H__45322AF9_0C80_4FFA_855F_2B5F21A3B65D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "../DocList.h"
#include "../ObjInfo.h"

class CMyHelpDoc : public CRichEditDoc, public virtual CObjInfo
{
protected: // create from serialization only
	CMyHelpDoc();
	DECLARE_DYNCREATE(CMyHelpDoc)

	DECLARE_FOR_OBJINFO(CRichEditDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyHelpDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	protected:
	virtual BOOL SaveModified();
	//}}AFX_VIRTUAL
	virtual CRichEditCntrItem* CreateClientItem(REOBJECT* preo) const;

// Implementation
public:
	virtual ~CMyHelpDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyHelpDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYHELPDOC_H__45322AF9_0C80_4FFA_855F_2B5F21A3B65D__INCLUDED_)
