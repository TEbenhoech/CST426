#include <string>

using namespace std;

class Enemy {
public:
	int x;
	int y;
	void virtual Update() {};
	void SetX(int x) {
		this->x = x;
	}
	void SetY(int y) {
		this->y = y;
	}
	string ToString() {
		return "x: " + to_string(x) + " y: " + to_string(y);
	}
};

class Dragon : public Enemy {
public:
	Dragon(int x, int y) {
		SetX(x);
		SetY(y);
	}
	void virtual Update() {
		y += 10;
		x += 1;
	}
};

class Wizard : public Enemy {
public:
	Wizard(int x, int y) {
		SetX(x);
		SetY(y);
	}
	void virtual Update() {
		x += 5;
	}
};