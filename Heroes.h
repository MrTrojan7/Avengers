#pragma once
#include "AllLibraries.h"
#include "WhoIsWho.h"

class TonyStark : public SuperHero, public Human, public GoodGuy, public Bulletproof
{
public:
	TonyStark(){ cout << "Antony Hovard Stark\n"; }
};