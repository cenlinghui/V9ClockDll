

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Aug 17 18:35:04 2016
 */
/* Compiler settings for .\xieka.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __xieka_h__
#define __xieka_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __Ixie_FWD_DEFINED__
#define __Ixie_FWD_DEFINED__
typedef interface Ixie Ixie;
#endif 	/* __Ixie_FWD_DEFINED__ */


#ifndef __xie_FWD_DEFINED__
#define __xie_FWD_DEFINED__

#ifdef __cplusplus
typedef class xie xie;
#else
typedef struct xie xie;
#endif /* __cplusplus */

#endif 	/* __xie_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __Ixie_INTERFACE_DEFINED__
#define __Ixie_INTERFACE_DEFINED__

/* interface Ixie */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_Ixie;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1613A565-7F23-4FE9-A564-93D7DA3AB82B")
    Ixie : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GetResult( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeCard( 
            BSTR bstr1) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IxieVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Ixie * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Ixie * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Ixie * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Ixie * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Ixie * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Ixie * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Ixie * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetResult )( 
            Ixie * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *writeCard )( 
            Ixie * This,
            BSTR bstr1);
        
        END_INTERFACE
    } IxieVtbl;

    interface Ixie
    {
        CONST_VTBL struct IxieVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Ixie_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Ixie_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Ixie_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Ixie_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Ixie_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Ixie_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Ixie_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define Ixie_get_GetResult(This,pVal)	\
    ( (This)->lpVtbl -> get_GetResult(This,pVal) ) 

#define Ixie_writeCard(This,bstr1)	\
    ( (This)->lpVtbl -> writeCard(This,bstr1) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Ixie_INTERFACE_DEFINED__ */



#ifndef __XIEKALib_LIBRARY_DEFINED__
#define __XIEKALib_LIBRARY_DEFINED__

/* library XIEKALib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_XIEKALib;

EXTERN_C const CLSID CLSID_xie;

#ifdef __cplusplus

class DECLSPEC_UUID("88075281-6634-4FB4-9C71-6EDBE797EEA9")
xie;
#endif
#endif /* __XIEKALib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


