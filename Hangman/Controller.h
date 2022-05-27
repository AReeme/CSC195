#pragma once
#include "Game.h"
#include <iostream>

using namespace std;

class Controller
{
public:
	Controller();
	~Controller();

	void Run();
private:
	Game* game;
};
