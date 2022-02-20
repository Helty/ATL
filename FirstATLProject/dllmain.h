// dllmain.h: объявление класса модуля.

class CFirstATLProjectModule : public ATL::CAtlDllModuleT< CFirstATLProjectModule >
{
public :
	DECLARE_LIBID(LIBID_FirstATLProjectLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_FIRSTATLPROJECT, "{caa2f330-7ef9-490f-ad15-615e284cc17d}")
};

extern class CFirstATLProjectModule _AtlModule;
