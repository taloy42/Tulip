#pragma once

#ifdef TL_PLATFORM_WINDOWS

extern Tulip::Application* Tulip::CreateApplication();

int main(int argc, char** argv) {
	auto app = Tulip::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Tulip only support windows for now!
#endif