#pragma once
#ifndef GAME_H
#define GAME_H
#include "Coin.h"
#include <iostream>

using namespace std;

class Game
{
private:
	Coin coins[3] = { Coin(25), Coin(10), Coin(5) };
	int totalScore;
	int rounds;
	void printFlipResults();
	void FlipCoins();
public:
	Game();
	void printScore();
	int getRounds();
	int getScore();	
	void playGame();
};

#endif