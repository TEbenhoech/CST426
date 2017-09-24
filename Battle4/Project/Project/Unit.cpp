#include "Component.cpp"

class Unit {
public:
	Unit(InputComponent* input, RenderComponent* render, SoundComponent* sound) {
		this->input = input;
		this->render = render;
		this->sound = sound;
	}
	void Update() {
		input->Update();
		render->Update();
		sound->Update();
	}

private:
	InputComponent* input;
	RenderComponent* render;
	SoundComponent* sound;
};