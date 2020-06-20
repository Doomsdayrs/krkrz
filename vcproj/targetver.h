#ifndef __TARGET_VER_H__
#define __TARGET_VER_H__

// SDKDDKVer.h Includes defines the highest available Windows platform.

// previous Windows If you want to build your application for the platform, include WinSDKVer.h and
// SDKDDKVer.h Before including, set the _WIN32_WINNT macro to indicate the platforms you want to support.
//#define WINVER 0x0501 // Windows XP
//#define _WIN32_WINNT 0x0501 // Windows XP
// for touch device
#define WINVER 0x0601 // Window 7
#define _WIN32_WINNT 0x0601 // Windows 7
#include <SDKDDKVer.h>

#endif
