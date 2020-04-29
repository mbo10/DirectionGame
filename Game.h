#pragma once
#include "GameComponent.h"
class Game
{
public:
	void Add(GameComponent** id);
	Game();
	Game() {
		*initialise = SetInitialise();
	};
	~Game(void);
	void Run();
	
	void SetInitialise();
	void SetTerminate();

private:
	int componentCount;
	GameComponent** components;
	typedef void (*initialise)();
	typedef void (*terminate);
	const int TICKS_1000MS = 1000;
};

