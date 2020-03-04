#pragma once

enum e_engine_type : uint8_t
{
	_engine_type_not_set,
	_engine_type_halo1,
	_engine_type_halo_reach,
	_engine_type_mcc,
	_engine_type_eldorado
};

#define MAKE_FILE_VERSION(a, b, c, d) ((uint64_t(a) << 48) | (uint64_t(b) << 32) | (uint64_t(c) << 16) | (uint64_t(d) << 0))
#define MAKE_PRODUCT_VERSION(a, b, c) ((uint64_t(a) << 48) | (uint64_t(b) << 32) | (uint64_t(c) << 0))

enum e_build : uint64_t
{
	_build_not_set,
	_build_mcc_1_887_0_0				= MAKE_FILE_VERSION(1, 887, 0, 0),	 
	_build_mcc_1_1035_0_0				= MAKE_FILE_VERSION(1, 1035, 0, 0), 
	_build_mcc_1_1186_0_0				= MAKE_FILE_VERSION(1, 1186, 0, 0), 
	_build_mcc_1_1211_0_0				= MAKE_FILE_VERSION(1, 1211, 0, 0), 
	_build_mcc_1_1246_0_0				= MAKE_FILE_VERSION(1, 1246, 0, 0), 
	_build_mcc_1_1270_0_0				= MAKE_FILE_VERSION(1, 1270, 0, 0), 
	_build_mcc_1_1305_0_0				= MAKE_FILE_VERSION(1, 1305, 0, 0), 
	_build_mcc_1_1350_0_0				= MAKE_FILE_VERSION(1, 1350, 0, 0), 
	_build_mcc_1_1367_0_0				= MAKE_FILE_VERSION(1, 1367, 0, 0),
	_build_eldorado_1_106708_cert_ms23 = MAKE_PRODUCT_VERSION(0, 1, 106708), // 1.106708 cert_ms23  Mar 20 2015 17:24:42
	//_build_eldorado_1_155080_cert_ms23 = MAKE_PRODUCT_VERSION(0, 1, 155080), // #TODO: If these are required for boot we must find a way to accurately find the version from the binary
	//_build_eldorado_1_171227_cert_ms23 = MAKE_PRODUCT_VERSION(0, 1, 171227),
	//_build_eldorado_1_177150_cert_ms23 = MAKE_PRODUCT_VERSION(0, 1, 177150),
	//_build_eldorado_1_235640_cert_ms25 = MAKE_PRODUCT_VERSION(0, 1, 235640),
	_build_eldorado_1_301003_cert_MS26_new = MAKE_PRODUCT_VERSION(0, 1, 301003),
	_build_eldorado_1_327043_cert_ms26 = MAKE_PRODUCT_VERSION(0, 1, 327043),
	_build_eldorado_1_332089_Live = MAKE_PRODUCT_VERSION(4, 1, 332089),
	_build_eldorado_1_373869_Live = MAKE_PRODUCT_VERSION(8, 1, 373869),
	_build_eldorado_1_416138_Live = MAKE_PRODUCT_VERSION(9, 1, 416138),
	_build_eldorado_1_430653_Live = MAKE_PRODUCT_VERSION(10, 1, 430653),
	_build_eldorado_1_454665_Live = MAKE_PRODUCT_VERSION(10, 1, 454665),
	_build_eldorado_1_479394_Live = MAKE_PRODUCT_VERSION(10, 1, 479394),
	_build_eldorado_1_498295_Live = MAKE_PRODUCT_VERSION(11, 1, 498295),
	_build_eldorado_1_530945_Live = MAKE_PRODUCT_VERSION(11, 1, 530945),
	_build_eldorado_1_533032_Live = MAKE_PRODUCT_VERSION(11, 1, 533032),
	_build_eldorado_1_554482_Live = MAKE_PRODUCT_VERSION(11, 1, 554482),
	_build_eldorado_1_571698_Live = MAKE_PRODUCT_VERSION(11, 1, 571698),
	_build_eldorado_1_604673_Live = MAKE_PRODUCT_VERSION(11, 1, 604673),
	_build_eldorado_1_700255_cert_ms30_oct19 = MAKE_PRODUCT_VERSION(12, 1, 700255),
};

#undef MAKE_FILE_VERSION

constexpr uintptr_t GetEngineBaseAddress(e_engine_type engine_type)
{
	switch (engine_type)
	{
#ifdef _WIN64
	case _engine_type_halo_reach:
	case _engine_type_halo1:
		return 0x180000000;
	case _engine_type_mcc:
		return 0x140000000;
#else
	case _engine_type_eldorado:
		return 0x400000;
#endif
	}
	return ~uintptr_t();
}

constexpr uintptr_t GetEngineTopAddress(e_engine_type engine_type, e_build build)
{
#ifdef _WIN64
	if (engine_type == _engine_type_mcc)
	{
		// #TODO: Calculate the top address.
		return 0x14FFFFFFF;
	}
	else
	{
		if (engine_type == _engine_type_halo_reach)
		{
			switch (build)
			{
			case e_build::_build_mcc_1_887_0_0:
				return 0x184925000;
			case e_build::_build_mcc_1_1035_0_0:
				return 0x18450D000;
			case e_build::_build_mcc_1_1186_0_0:
				return 0x183985000;
			case e_build::_build_mcc_1_1211_0_0:
				return 0x183986000;
			case e_build::_build_mcc_1_1246_0_0:
				return 0x18397F000;
			case e_build::_build_mcc_1_1270_0_0:
				return 0x18397F000;
			case e_build::_build_mcc_1_1305_0_0:
				return 0x18392F000;
			}
		}
		if (build > e_build::_build_not_set)
		{
			// #TODO: Calculate the top address.
			return 0x18FFFFFFF;
		}
}
#else
	if (engine_type == _engine_type_eldorado)
	{
		switch (build)
		{
		case e_build::_build_eldorado_1_106708_cert_ms23:
			return 0x06A0B000;
		}
	}
#endif
	return ~uintptr_t();
}

constexpr const char* GetEngineModuleFileName(e_engine_type engine_type)
{
	switch (engine_type)
	{
	case _engine_type_halo_reach:
		return "haloreach.dll";
	case _engine_type_halo1:
		return "halo1.dll";
	case _engine_type_mcc:
		return "MCC-Win64-Shipping.exe";
	case _engine_type_eldorado:
		return "eldorado.exe";
	}
	FATAL_ERROR(L"Unsupported GameVersion");
}

extern bool IsEngineLoaded(e_engine_type engine_type);
extern void* GetEngineMemoryAddress(e_engine_type engine_type);

inline char* GetEngineVirtualAddress(e_engine_type engine_type, uintptr_t virtual_address)
{
	uintptr_t relative_virtual_address = virtual_address - GetEngineBaseAddress(engine_type);
	char* engine_virtual_address = reinterpret_cast<char*>(GetEngineMemoryAddress(engine_type));
	char* virtual_address_pointer = engine_virtual_address + relative_virtual_address;
	return virtual_address_pointer;
}