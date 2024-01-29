#pragma once

#ifdef TL_PLATFORM_WINDOWS
	#ifdef TL_BUILD_DLL
		#define TULIP_API __declspec(dllexport)
	#else
		#define TULIP_API __declspec(dllimport)
	#endif
#else
	#error Tulip only support windows for now!
#endif