#include <Tulip.h>


class Sandbox : public Tulip::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};


Tulip::Application* Tulip::CreateApplication() {
	return new Sandbox();
}