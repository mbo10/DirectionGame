#include "DrawableGameComponent.h"
#include <iostream>
using namespace std;

DrawableGameComponent::DrawableGameComponent(int x, int y):GameComponent()
{
	x = x;
	y = y;
}

void DrawableGameComponent::Update(const tm* eventTime)
{
	cout << GameComponent::id << eventTime << endl;
	switch (direction) {
	case Left: x = x - 1;
	case Right: x = x + 1;
	case Up: y = y + 1;
	case Down: y = y - 1;
	}
}

void DrawableGameComponent::ChangeDirection()
{
	direction = (Direction)(rand() % 3);
}

void DrawableGameComponent::Draw()
{
	cout << direction << x << y << endl;
}
