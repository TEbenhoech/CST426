#include "Zombie.cpp"

using namespace std;

class Pool {
private:
	int size = 10;
	int active;
	Zombie* units[10];
public:
	Pool() {
		for (int i = 0; i < size; i++) {
			units[i] = new Zombie();
		}
	}
	bool Add() {
		for (int i = 0; i < size; i++) {
			if (!units[i]->active) {
				units[i]->active = true;
				return true;
			}
		}
		return false;
	}
	bool Remove(int index) {
		if (index < size && units[index]->active) {
			units[index]->active = false;
			return true;
		}
		else
			return false;
	}
	Zombie* Get(int index) {
		if (index < size && units[index]->active)
			return units[index];
		else
			return nullptr;
	}
	int GetActive() {
		int count = 0;
		for (int i = 0; i < size; i++) {
			if (units[i]->active)
				count++;
		}
		return count;
	}
	int Size() {
		return size;
	}
};