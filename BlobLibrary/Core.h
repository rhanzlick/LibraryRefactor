#pragma once

#include "BlobExports.h"

#include <string>

/// <summary>
/// Core utilities that are useful to all our applications.
/// </summary>
class BLOBLIBRARY_API CCore {
public:
	CCore(void);
	// TODO: add your methods here.
};


std::string BLOBLIBRARY_API combinesString(const std::string & stringOne, const std::string & stringTwo);


extern BLOBLIBRARY_API int nCore;

BLOBLIBRARY_API int fnCore(void);
