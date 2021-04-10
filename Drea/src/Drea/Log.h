#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Drea
{
	class DREA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

/// Core Log Macros
#define DREA_CORE_TRACE(...) ::Drea::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DREA_CORE_INFO(...)  ::Drea::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DREA_CORE_WARN(...)  ::Drea::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DREA_CORE_ERROR(...) ::Drea::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DREA_CORE_FATAL(...) ::Drea::Log::GetCoreLogger()->fatal(__VA_ARGS__)

/// Client Log Macros
#define DREA_TRACE(...) ::Drea::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DREA_INFO(...)  ::Drea::Log::GetClientLogger()->info(__VA_ARGS__)
#define DREA_WARN(...)  ::Drea::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DREA_ERROR(...) ::Drea::Log::GetClientLogger()->error(__VA_ARGS__)
#define DREA_FATAL(...) ::Drea::Log::GetClientLogger()->fatal(__VA_ARGS__)

/// If Dist Build
#define DREA_CORE_INFO