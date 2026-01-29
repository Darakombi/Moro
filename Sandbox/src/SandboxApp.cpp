#include <Moro.h>

class Sandbox : public Moro::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Moro::Application* Moro::CreateApplication() {
	return new Sandbox;
}