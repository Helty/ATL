// dllmain.h: объявление класса модуля.

class CATLServerLibModule : public ATL::CAtlDllModuleT< CATLServerLibModule >
{
public :
	DECLARE_LIBID(LIBID_ATLServerLibLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLSERVERLIB, "{adcf96fe-86aa-4f7b-a7a5-95506e6a5628}")
};

extern class CATLServerLibModule _AtlModule;
