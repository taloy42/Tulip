#pragma once


#include "Core.h"

namespace Tulip {
	class TULIP_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

