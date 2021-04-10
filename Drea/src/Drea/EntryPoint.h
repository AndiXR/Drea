#pragma once

#ifdef DREA_PLATFORM_WINDOWS

extern Drea::Application* Drea::CreateApplication();

void main(int argc, char** argv)
{
	Drea::Log::Init();
	DREA_CORE_WARN("Initialized Log!");
	DREA_CORE_ERROR("Error!");
	int a = 5;
	DREA_INFO("Hello! Var={0}", a);

	auto app = Drea::CreateApplication();
	app->Run();
	delete app;
}

#endif