#include "Types.cpp"

using namespace std;

class Unit {
public:
	int hp;
	Unit(Type* t) {
		this->t = t;
		hp = t->GetHp();
	}
	char GetAttack() {
		return t->GetAttack();
	}
	string virtual ToString() = 0;
private:
	Type* t;
};

class Dragon : public Unit {
public:
	Dragon(Type* t) : Unit(t) {}
	string virtual ToString() {
		return "Dragon, attack:" + to_string(GetAttack()) + " hp: " + to_string(hp);
	}
};

class Wizard : public Unit {
public:
	Wizard(Type* t) : Unit(t) {}
	string virtual ToString() {
		return "Wizard, attack:" + to_string(GetAttack()) + " hp: " + to_string(hp);
	}
};