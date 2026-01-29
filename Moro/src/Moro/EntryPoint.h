#pragma once

#ifdef MORO_PLATFORM_WINDOWS

extern Moro::Application* Moro::CreateApplication();

int main(int argc, char** argv) {
	auto app = Moro::CreateApplication();
	app->Run();
	delete app;
}

#endif