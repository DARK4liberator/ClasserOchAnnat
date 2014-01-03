
#include "MenueState.h"
#include <iostream>

MenueState::MenueState(){
	std::cout << "MenueState::Menustate" << std::endl;
	m_done = false;
	m_next_state = "";
};

bool MenueState::Enter(){
	std::cout << "MenueState::Enter" << std::endl;
	return true;
};
void MenueState::Exit(){
	std::cout << "MenueState::Exit" << std::endl;
};
bool MenueState::Update(float deltatime){
	std::cout << "MenueState::Update" << std::endl;
	std::cout << "[new]New Game" << std::endl;
	std::cout << "[opt] Option" << std::endl;
	std::cout << "[quit] Quit" << std::endl;

	std::string choice;
	std::cin >> choice;

	if(choice.compare("new") == 0){
		m_next_state = "GameState";
		m_done = true;
	}
	else if(choice.compare("opt") == 0){
		m_next_state = "OptionState";
		m_done = true;
	}
	else if(choice.compare("quit") == 0){
		m_next_state = "";
		m_done = true;
	}

	return !m_done;


};
void MenueState::Draw(){
	std::cout << "MenueState::Draw" << std::endl;
};
std::string MenueState::Next(){
	std::cout << "MenueState::Next" << std::endl;
	return m_next_state;
};
bool MenueState::IsType(const std::string &type){
		return type.compare("MenueState") == 0;
};
