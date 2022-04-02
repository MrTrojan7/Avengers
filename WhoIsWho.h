#pragma once
//#include "AllLibraries.h"
#include "Ability.h"

class BadGuy abstract
{
public:
	virtual void MakeBadThings() { cout << "Bad guy\n"; };
};

class GoodGuy abstract
{
public:
	virtual void MakeGoodThings() { cout << "Good guy\n"; };
};

class Human abstract
{
public:
	virtual void IsAHuman() { cout << "Human\n"; };
};

class God abstract
{
public:
	virtual void IsAGod() { cout << "God\n"; };
};

class Robot abstract
{
public:
	virtual void IsARobot() { cout << "Robot\n"; };
};

class Animal abstract
{
public:
	virtual void IsAnAnimal() { cout << "Animal\n"; };
};

class SuperHero abstract 
{
public:
	virtual void HasTheAbility() { cout << "Abilities:\n"; };
};

