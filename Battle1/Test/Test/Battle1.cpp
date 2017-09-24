#include "../../Project/Project/Spawner.cpp";
#include <vector>;
#include <iostream>;

using namespace std;

int main() {
	vector<Unit*> units;
	cout << "Creating Spawners" << endl;
	Dragon *dragon = new Dragon(50, 5);
	Spawner *dragonSpawn = new Spawner(dragon);
	Wizard *wizard = new Wizard(15, 10);
	Spawner *wizardSpawn = new Spawner(wizard);
	Zombie *slowZombie = new Zombie(5, 20);
	Spawner *slowZomSpawn = new Spawner(slowZombie);
	Zombie *fastZombie = new Zombie(30, 20);
	Spawner *fastZomSpawn = new Spawner(fastZombie);
	cout << "Spawning a dragon into vector" << endl;
	units.push_back(dragonSpawn->Spawn());
	cout << "Spawning a wizard into vector" << endl;
	units.push_back(wizardSpawn->Spawn());
	cout << "Spawning 5 slow zombies into vector" << endl;
	for (int i = 0; i < 5; i++) {
		units.push_back(slowZomSpawn->Spawn());
	}
	cout << "Spawning 5 fast zombies into vector" << endl;
	for (int i = 0; i < 5; i++) {
		units.push_back(fastZomSpawn->Spawn());
	}
	cout << "Printing units in vector" << endl;
	for (int i = 0; i < units.size(); i++) {
		cout << units[i]->ToString() << endl;
	}
	cout << "Press any key to close" << endl;
	cin.get();
	return 0;
}