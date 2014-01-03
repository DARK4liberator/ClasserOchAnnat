
#pragma once

#include "State.h"
#include <string>

class OptionState : public State{
	public:
	OptionState();

	bool Enter();
	void Exit();
	bool Update(float deltatime);
	void Draw();
	std::string Next();
	bool IsType(const std::string &type);


};