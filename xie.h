// xie.h : Declaration of the Cxie

#ifndef __XIE_H_
#define __XIE_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// Cxie
class ATL_NO_VTABLE Cxie : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<Cxie, &CLSID_xie>,
	public IDispatchImpl<Ixie, &IID_Ixie, &LIBID_XIEKALib>
{
public:
	Cxie()
	{
	}
public:
	char chResult[2000];
DECLARE_REGISTRY_RESOURCEID(IDR_XIE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(Cxie)
	COM_INTERFACE_ENTRY(Ixie)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// Ixie
public:
	STDMETHOD(writeCard)(BSTR bstr1);
	STDMETHOD(get_GetResult)(/*[out, retval]*/ BSTR *pVal);
};

#endif //__XIE_H_
