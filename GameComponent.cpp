#include "GameComponent.h"
#include <ctime>
#include <iostream>

using namespace std;

GameComponent::GameComponent(int id)
{
	instances++;
}

void GameComponent::Update(const tm**)
{
	cout << "ID: " << id << endl;
}
