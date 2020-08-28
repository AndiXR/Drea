#pragma once

#ifdef DREA_PLATFORM_WINDOWS
	#ifdef DREA_BUILD_DLL
		#define DREA_API __declspec(dllexport)
	#else
		#define DREA_API __declspec(dllimport)
	#endif
#else
	#error Drea only supports Windows!
#endif