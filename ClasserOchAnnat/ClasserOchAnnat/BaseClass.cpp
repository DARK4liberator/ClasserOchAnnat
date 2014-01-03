//BaseClass.cpp


#include <iostream>
#include "BaseClass.h"

BaseClass::BaseClass(){
	std::cout << "BaseClass::BaseClass" << std::endl;
};

BaseClass::~BaseClass(){
	std::cout << "BaseClass::~BaseClass" << std::endl;

};

DerivedClass::DerivedClass(){
		std::cout << "DerivedClass::DerivedClass" << std::endl;
};

void DerivedClass::Method(){

	m_some_more_data = 0;
};
DerivedClass::~DerivedClass(){
		std::cout << "DerivedClass::~DerivedClass" << std::endl;
};

SuperClass::SuperClass(){
				std::cout << "SuperClass::SuperClass" << std::endl;
};

SuperClass::~SuperClass(){
				std::cout << "SuperClass::~SuperClass" << std::endl;
};
