#pragma once

#include "Core.h"

namespace Drea 
{
	class DREA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}