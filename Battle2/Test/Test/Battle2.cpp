#include <iostream>
#include <vector>
#include "../../Project/Project/Unit.cpp"

using namespace std;

int main() {
	vector<Enemy*> units;
	cout << "Adding enemies to vector" << endl;
	for (int i = 0; i < 2; i++) {
		units.push_back(new Dragon(i, i * 5));
	}
	for (int i = 0; i < 3; i++) {
		units.push_back(new Wizard(i, i * 5));
	}
	cout << "Initial positions" << endl;
	for (int i = 0; i < units.size(); i++) {
		cout << units[i]->ToString() << endl;
	}
	cout << "Simulaing 30 frames" << endl;
	for (int i = 0; i < 30; i++) {
		cout << "Frame: " << i << endl;
		for (int j = 0; j < units.size(); j++) {
			units[j]->Update();
		}
	}
	cout << "Final positions" << endl;
	for (int i = 0; i < units.size(); i++) {
		cout << units[i]->ToString() << endl;
	}
	cout << "Press any key to close" << endl;
	cin.get();
	return 0;
}