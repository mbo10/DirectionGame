#pragma once 
#include <ctime>
class GameComponent
{
public:
	GameComponent(int id);
	void Update(const tm**);
protected:
	int id;
	int instances = 0;
};

