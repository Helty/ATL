// MyATLSimpleObject.cpp: реализация CMyATLSimpleObject

#include "pch.h"
#include "MyATLSimpleObject.h"


// CMyATLSimpleObject

STDMETHODIMP CMyATLSimpleObject::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IMyATLSimpleObject
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
