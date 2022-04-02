#include "AllLibraries.h"
#include "Ability.h"
#include "WhoIsWho.h"
#include "Heroes.h"

int main()
{
	TonyStark ironman;
	ironman.HasTheAbility();
	ironman.IsAHuman();
	ironman.CanFly();
	CaptainAmerica cap;
	//cap.CanFly(); //no flying
	Hulk hulk;
	//hulk.CanFly(); //no flying
	Vision vision;
	vision.CanFly();
	Thor thor;
	thor.IsAGod();
	thor.CanFly();
	Ultron ultron;
	ultron.CanFly();
	Thanos thanos;
	

	return 0;
}