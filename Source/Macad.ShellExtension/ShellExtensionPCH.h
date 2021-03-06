// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define _WIN32_WINNT _WIN32_WINNT_WIN7

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define _CRT_SECURE_NO_WARNINGS

struct IUnknown; // Workaround for "combaseapi.h(229): error C2187: syntax error: 'identifier' was unexpected here

// Windows Header Files
#include <windows.h>
#include <Guiddef.h> 
#include <shlobj.h>                 // For SHChangeNotify 
#include <unknwn.h>     // For IClassFactory 
#include <Shlwapi.h> 
#include <thumbcache.h>     // For IThumbnailProvider 
#include <wincodec.h>       // Windows Imaging Codecs 
#include <strsafe.h> 
#include <new> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
