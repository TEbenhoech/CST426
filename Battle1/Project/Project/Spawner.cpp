#include "Monster.cpp";
using namespace std;

class Spawner {
public:
	Spawner(Unit* spawnedUnit) {
		this->spawnedUnit = spawnedUnit;
	}
	Unit* Spawn() {
		return spawnedUnit->Clone();
	}
private:
	Unit* spawnedUnit;
};