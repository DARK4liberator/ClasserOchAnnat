// main.cpp

#include <iostream>

#include "StateManager.h"
#include "LoadingState.h"
#include "MenueState.h"
#include "GameState.h"
#include "OptionState.h"

int main(int argv, char *argc[]){


	StateManager mgr;
	mgr.Attach(new LoadingState);
	mgr.Attach(new MenueState);
	mgr.Attach(new GameState);
	mgr.Attach(new OptionState);
	mgr.SetState("LoadingState");
	while(mgr.IsRunning()) {

	mgr.Update(0.01f);
	mgr.Draw();
	
	}
	getchar();
	
	return 0;
};