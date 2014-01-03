
#include "LoadingState.h"
#include <iostream>



LoadingState::LoadingState(){
	std::cout << "Loading State::LoadingState" << std::endl;
};

bool LoadingState::Enter(){
	std::cout << "Loading State::Enter" << std::endl;
	return true;
};
void LoadingState::Exit(){
	std::cout << "Loading State::Exit" << std::endl;
};
bool LoadingState::Update(float deltatime){
	std::cout << "Loading State::Update" << std::endl;
	return false;
};
void LoadingState::Draw(){
	std::cout << "Loading State::Draw" << std::endl;
};
std::string LoadingState::Next(){
	std::cout << "Loading State::Next" << std::endl;
	return "MenueState";
};
bool LoadingState::IsType(const std::string &type){
	
	return type.compare("LoadingState") == 0;
};