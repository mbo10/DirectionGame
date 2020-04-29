#include "Game.h"
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif
void Game::Add(GameComponent** id)
{
	GameComponent** components = new GameComponent**;
}

Game::Game()
{

}

Game::~Game(void)
{
}

void Game::Run()
{
	//Initialisation();

	for (int i = 0; i < sizeof(components) / sizeof(int); i++) {
	//components[i].Update(DateTime);
	sleep(TICKS_1000MS);
	}

	//Termination();
}

void Game::SetInitialise()
{
}

void Game::SetTerminate()
{
}

//void Game::SetInitialise()
//{
	//initialise ptrInitialise;
	//ptrInitialise = Initialisation;
//}

/*void Game::SetTerminate()
{
	terminate ptrTerminate = Termination;
}*/
