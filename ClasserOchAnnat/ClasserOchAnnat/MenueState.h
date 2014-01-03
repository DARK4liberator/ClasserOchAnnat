
#pragma once

#include "State.h"
#include <string>

class MenueState : public State{
	public:
	MenueState();

	bool Enter();
	void Exit();
	bool Update(float deltatime);
	void Draw();
	std::string Next();
	bool IsType(const std::string &type);

private:
	bool m_done;
	std::string m_next_state;
};