#include <Drea.h>

class Sandbox : public Drea::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Drea::Application* Drea::CreateApplication()
{
	return new Sandbox();
}