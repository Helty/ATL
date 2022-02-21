// Calculator.h: объявление CCalculator

#pragma once
#include "resource.h"       // основные символы



#include "ATLServerLib_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;


// CCalculator

class ATL_NO_VTABLE CCalculator :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCalculator, &CLSID_Calculator>,
	public IDispatchImpl<ICalculator, &IID_ICalculator, &LIBID_ATLServerLibLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCalculator()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CCalculator)
	COM_INTERFACE_ENTRY(ICalculator)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(Add)(DOUBLE value);
	STDMETHOD(Substruct)(DOUBLE value);
	STDMETHOD(Multiply)(DOUBLE value);
	STDMETHOD(Divide)(DOUBLE value);
	STDMETHOD(Sqrt)();
	STDMETHOD(get_Result)(DOUBLE* pVal);
	STDMETHOD(get_HasError)(BOOL* pVal);
	STDMETHOD(put_HasError)(BOOL newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(Calculator), CCalculator)
