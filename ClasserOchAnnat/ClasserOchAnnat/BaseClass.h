//BaseClass.h

#pragma once

class BaseClass {
public:

	BaseClass(); // Constructor
	virtual ~BaseClass(); // Destructor // virtual anropar alla deconstructorer om vi pekar p� baseclass

private:
	int m_some_data;
protected:
	int m_some_more_data;

};

class DerivedClass : public BaseClass { //�rver fr�n baseclass
public:
	DerivedClass();
	~DerivedClass();

	void Method();
};

class SuperClass : public DerivedClass {
public:
	SuperClass();
	~SuperClass();

};