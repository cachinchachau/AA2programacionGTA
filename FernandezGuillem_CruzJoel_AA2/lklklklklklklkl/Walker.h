#pragma once
#include "Globals.h"


class Peaton
{

	int pow;
	int hp;

public:

	Position peatonPos;
	City peatonCity;

	void initPeaton(City city, int hp, int pow);
	void spawn(Cell** map);
	void die(Cell** map);
	bool isCloseToPlayer(Cell** map);
	void move(Cell** map);

	void setPow(int newPow) { pow = newPow; }
	int getPow() { return pow; }
	void setHp(int newHp) { hp = newHp; }
	int getHp() { return hp; }

};