#pragma once
#include <ECS.h>
#include <Timer.h>
//basically playerdata but for the enemy
class Enemy
{
public:
	//Enemy Stat Values
	int m_hp = 3;

	//Internal Values
	glm::vec3 movementDirection = glm::vec3(0, 0, 0);
	btVector3 thisPosition;
	btVector3 distance;
	int entityNumber = 2;
	int lookRange = 5;
	float distanceNorm = 100.0f;
	float mTimer = 0.0f;
	float m_MovementSpeed = 10.f;

	float TimeBetweenHits = 1.f;
	float HitTimer = 0.f;
	bool canBeHit = false;

	//External Values
	btVector3 playerPosition;

	void Update();

	//to check if the player should take damage
};