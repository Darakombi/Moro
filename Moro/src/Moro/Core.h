#pragma once

#ifdef MORO_PLATFORM_WINDOWS
	#ifdef MORO_BUILD_DLL
		#define MORO_API __declspec(dllexport)
	#else
		#define MORO_API __declspec(dllimport)
	#endif
#else
	#error Moro is only supporting Windows currently
#endif