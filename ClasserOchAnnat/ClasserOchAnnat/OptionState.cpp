

#include "OptionState.h"
#include <iostream>

OptionState::OptionState(){
	std::cout << "OptionState::Optionstate" << std::endl;
};

bool OptionState::Enter(){
		std::cout << "OptionState::Enter" << std::endl;
		return true;
};
void OptionState::Exit(){
		std::cout << "OptionState::Exit" << std::endl;
};
bool OptionState::Update(float deltatime){
		std::cout << "OptionState::Update" << std::endl;
		std::cout << "Here bee dragonz (press any key and enter to go back)" << std::endl;
		std::cin.ignore(1024, '\n');
		std::cin.get();
		return false;
};
void OptionState::Draw(){
		std::cout << "OptionState::Draw" << std::endl;
};
std::string OptionState::Next(){
		std::cout << "OptionState::Next" << std::endl;
		return "MenueState";
};
bool OptionState::IsType(const std::string &type){
	return type.compare("OptionState") == 0;
};