#pragma once
#include "AllLibraries.h"
#include "WhoIsWho.h"

class TonyStark : public Human, public GoodGuy, public Bulletproof, public Flyable , public XRayVision, public SuperSpeed
{
public:
	TonyStark(){ cout << "Antony Hovard Stark\n"; }
	void HasTheAbility() override 
	{
		cout << "HasTheAbility: SuperSpeed, XRayVision, Bulletproof, Flyable\n";
	}
};

class CaptainAmerica : public Human, public GoodGuy, public SuperSpeed, public Vorthy, public Bulletproof
{
public:
	CaptainAmerica() { cout << "Steve Rojers\n"; }
	void HasTheAbility() override
	{
		cout << "HasTheAbility: SuperSpeed, Bulletproof, Vorthy\n";
	}
};

class Hulk : public Human, public GoodGuy, public Bulletproof, public SuperSpeed, public Regeneration
{
public:
	Hulk() { cout << "Bruce Benner\n"; }
	void HasTheAbility() override
	{
		cout << "HasTheAbility: SuperSpeed, Bulletproof, Regeneration\n";
	}
};

class Thor : public God, public GoodGuy, public Bulletproof, public Flyable, public Vorthy, public SuperSpeed
{
public:
	Thor() { cout << "Thor Odinson\n"; }
	void HasTheAbility() override
	{
		cout << "HasTheAbility: Bulletproof, Flyable, Vorthy, SuperSpeed\n";
	}
};

class Ultron : public Robot, public BadGuy, public Bulletproof, public Flyable, public SuperSpeed, public XRayVision, public Magnetism, public Regeneration
{
public:
	Ultron() { cout << "Ultron\n"; }
	void HasTheAbility() override
	{
		cout << "HasTheAbility: Bulletproof, Flyable, SuperSpeed, XRayVision, Magnetism, Regeneration\n";
	}
};

class Vision : public Robot, public GoodGuy, public Bulletproof, public Flyable,
	public Vorthy, public SuperSpeed, public Invisibility, public XRayVision, public Magnetism, public Regeneration
{
public:
	Vision() { cout << "Vision\n"; }
	void HasTheAbility() override
	{
		cout << "HasTheAbility: Bulletproof, Flyable, Vorthy, SuperSpeed, Invisibility, XRayVision, Magnetism, Regeneration\n";
	}
};



class Thanos : public BadGuy, public God, public Regeneration, public Bulletproof
{
public:
	Thanos() { cout << "Thanos\n"; }
	void HasTheAbility() override
	{
		cout << "HasTheAbility: Bulletproof, Regeneration\n";
	}
};