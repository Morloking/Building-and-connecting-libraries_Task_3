#pragma once

#ifdef LEAVERLIB_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

#include <string>
namespace my_namespace {
	class LEAVERLIB_API Leaver {
	public:
		std::string leave(const std::string& name);
	};
}

