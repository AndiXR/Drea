#pragma once

#ifdef DREA_PLATFORM_WINDOWS

extern Drea::Application* Drea::CreateApplication();

void main(int argc, char** argv)
{
	auto app = Drea::CreateApplication();
	app->Run();
	delete app;
}

#endif