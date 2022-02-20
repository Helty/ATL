// MyATLSimpleObject.h: объявление CMyATLSimpleObject

#pragma once
#include "resource.h"       // основные символы



#include "FirstATLProject_i.h"
#include "_IMyATLSimpleObjectEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;


// CMyATLSimpleObject

class ATL_NO_VTABLE CMyATLSimpleObject :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyATLSimpleObject, &CLSID_MyATLSimpleObject>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CMyATLSimpleObject>,
	public CProxy_IMyATLSimpleObjectEvents<CMyATLSimpleObject>,
	public IDispatchImpl<IMyATLSimpleObject, &IID_IMyATLSimpleObject, &LIBID_FirstATLProjectLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMyATLSimpleObject()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CMyATLSimpleObject)
	COM_INTERFACE_ENTRY(IMyATLSimpleObject)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CMyATLSimpleObject)
	CONNECTION_POINT_ENTRY(__uuidof(_IMyATLSimpleObjectEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



};

OBJECT_ENTRY_AUTO(__uuidof(MyATLSimpleObject), CMyATLSimpleObject)
