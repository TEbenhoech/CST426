#include "../../Project/Project/Unit.cpp"
#include <iostream>

using namespace std;

int main() {
	cout << "Creating components for render" << endl;
	InputComponent* input = new InputComponent();
	RenderComponent* render = new RenderComponent();
	SoundComponent* sound = new SoundComponent();
	cout << "Creating unit with components" << endl;
	Unit* test = new Unit(input, render, sound);
	cout << "Unit created with three components" << endl;
	cout << "Press any key to close" << endl;
	cin.get();
	return 0;
}