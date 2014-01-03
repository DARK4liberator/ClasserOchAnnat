// GameObject.h

#pragma once

#include <vector>
//Pollymorphis!

class GameObject{
public:
	GameObject();
	virtual ~GameObject();

	virtual void Update(float deltatime) = 0; // har en child class med samma functions namn med samma parametrar så tittar den och visar den
											// = 0 blir det en PURE virtual! Det innebär: Att vi INTE skriver en implementation
										  // Skillnaden är inte allt för stor mellan en vanlig virtual och en pure. Pure är där för att skydda oss.

	static unsigned int GetCount();

protected:
	static unsigned int ms_object_count; // ms = member static.  Gör att den tillhåller KLASSEN! Tillhör bara klassen
	float m_x;
	float m_y;


};

class Player : public GameObject {
public:
	Player();
	~Player();

	void Update(float deltatime);

protected:
	int m_score;
};

class Enemy : public GameObject{
public:
	
	~Enemy();

	void Update(float deltatime);
};

class GameObjectManager{
public:
	GameObjectManager();
	~GameObjectManager();

	void Attach(GameObject *object);
	void UpdateAllGameObject(float deltatime);

private:
	std::vector<GameObject*> m_objects;
};