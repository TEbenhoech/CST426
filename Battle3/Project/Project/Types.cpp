#include <string>

using namespace std;

class Type {
public:
	int GetAttack() {
		return attack;
	}
	int GetHp() {
		return hp;
	}
	Type(int attack, int hp) {
		this->attack = attack;
		this->hp = hp;
	}
	string ToString() {
		return "attack: " + to_string(attack) + " hp: " + to_string(hp);
	}
private:
	int attack;
	int hp;
};