#include <string>;

using namespace std;

class Unit {
public:
	int hp;
	int speed;
	virtual Unit* Clone() const = 0;
	virtual string ToString() const = 0;
};

class Dragon : public Unit {
public:
	Dragon(int hp, int speed) {
		this->hp = hp;
		this->speed = speed;
	}
	virtual Unit* Clone() const {
		return new Dragon(hp, speed);
	}
	virtual string ToString() const {
		return "Dragon, HP:" + to_string(hp) + ",Speed:" + to_string(speed);
	}
};

class Wizard : public Unit {
public:
	Wizard(int hp, int speed) {
		this->hp = hp;
		this->speed = speed;
	}
	virtual Unit* Clone() const {
		return new Wizard(hp, speed);
	}
	virtual string ToString() const {
		return "Wizard, HP:" + to_string(hp) + ",Speed:" + to_string(speed);
	}
};

class Zombie : public Unit {
public:
	Zombie(int hp, int speed) {
		this->hp = hp;
		this->speed = speed;
	}
	virtual Unit* Clone() const {
		return new Zombie(hp, speed);
	}
	virtual string ToString() const {
		return "Zombie, HP:" + to_string(hp) + ",Speed:" + to_string(speed);
	}
};