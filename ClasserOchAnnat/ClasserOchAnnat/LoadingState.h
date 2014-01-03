
#pragma once

#include "State.h"
#include <string>

class LoadingState : public State{
public:
	LoadingState();

	bool Enter();
	void Exit();
	bool Update(float deltatime);
	void Draw();
	std::string Next();
	bool IsType(const std::string &type);

private:
};