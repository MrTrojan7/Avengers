#pragma once
//#include "AllLibraries.h"

class Ability abstract
{
public:
	virtual void HasTheAbility() = 0;
};

class Flyable abstract : public Ability
{
public:
	virtual void CanFly() { cout << "Flying\n"; };
};

class SuperSpeed abstract : public Ability
{
public:
	virtual void CanRunFast() { cout << "Running\n"; };
};

class XRayVision abstract : public Ability
{
public:
	virtual void CanSeeEverything() { cout << "See everything\n"; }
};

class Bulletproof abstract : public Ability
{
public:
	virtual void CanStopBullet() { cout << "Stop bullet\n"; };
};

class Regeneration abstract : public Ability
{
public:
	virtual void CanHealing() { cout << "can healing HP\n"; };
};

class Magnetism abstract : public Ability
{
public:
	virtual void CanMagnetize() { cout << "Can magnetize things\n"; };
};

class Invisibility abstract : public Ability
{
public:
	virtual void CanInvisible() { cout << "Can invisible\n"; };
};