
#include "GameState.h"
#include <iostream>

GameState::GameState(){
		std::cout << "GameState::GameState" << std::endl;
};

bool GameState::Enter(){
		std::cout << "GameState::Enter" << std::endl;
		return true;
};
void GameState::Exit(){
		std::cout << "GameState::Exit" << std::endl;
};
bool GameState::Update(float deltatime){
		std::cout << "GameState::Update" << std::endl;
		std::cout << "Here is the awesome GAME! WOO! WIPIE!" << std::endl;
		std::cin.ignore(1024, '\n');
		std::cin.get();
		return false;
};
void GameState::Draw(){
		std::cout << "GameState::Draw" << std::endl;
};
std::string GameState::Next(){
		std::cout << "GameState::Next" << std::endl;
		return "MenueState";
};
bool GameState::IsType(const std::string &type){
	return type.compare("GameState") == 0;
};