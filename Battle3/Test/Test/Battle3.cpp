#include "../../Project/Project/Units.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "Creating types" << endl;
	vector<Type*> types;
	types.push_back(new Type(50, 5));
	types.push_back(new Type(1, 20));
	cout << "Type variables" << endl;
	cout << "Type 1 " << types[0]->ToString() << endl;
	cout << "Type 2 " << types[1]->ToString() << endl;
	cout << "Creating four of both unis, two of each type" << endl;
	vector<Unit*> units;
	for (int i = 0; i < 4; i++) {
		units.push_back(new Dragon(types[i / 2]));
	}
	for (int i = 0; i < 4; i++) {
		units.push_back(new Wizard(types[i / 2]));
	}
	cout << "Printing units with variables of their type" << endl;
	for (int i = 0; i < units.size(); i++) {
		cout << units[i]->ToString() << endl;
	}
	cout << "Press any key to close" << endl;
	cin.get();
	return 0;
}