
#pragma once

#include "State.h"
#include <string>

class GameState : public State{
	public:
	GameState();

	bool Enter();
	void Exit();
	bool Update(float deltatime);
	void Draw();
	std::string Next();
	bool IsType(const std::string &type);


};