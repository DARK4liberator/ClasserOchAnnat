// GameObject.h

#pragma once

#include <vector>
//Pollymorphis!

class GameObject{
public:
	GameObject();
	virtual ~GameObject();

	virtual void Update(float deltatime) = 0; // har en child class med samma functions namn med samma parametrar s� tittar den och visar den
											// = 0 blir det en PURE virtual! Det inneb�r: Att vi INTE skriver en implementation
										  // Skillnaden �r inte allt f�r stor mellan en vanlig virtual och en pure. Pure �r d�r f�r att skydda oss.

	static unsigned int GetCount();

protected:
	static unsigned int ms_object_count; // ms = member static.  G�r att den tillh�ller KLASSEN! Tillh�r bara klassen
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