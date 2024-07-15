#include "Game.h"
#include "Coin.h"
#include <iostream>

using namespace std;

Game::Game():totalScore(0), rounds(0) {
	srand(time(0));
}
void Game::printFlipResults() {
	for (Coin c : coins)
		cout << c.getSideUp();
}
void Game::FlipCoins() {
	for (Coin &c : coins)
		c.flip();
}
void Game::printScore() {
	cout << "\nYour total score is " << totalScore << "." << endl;
}
int Game::getRounds() {
	return rounds;
}
int Game::getScore() {
	return totalScore;
}
void Game::playGame() {
	while (totalScore < 100) {
		FlipCoins();
		printFlipResults();
		for (int i = 0; i < 3; i++) {
			if (coins[i].isItHeads() == true)
				totalScore += coins[i].getCentValue();
			
		}
		rounds++;
		printScore();
		cout << "It took a total of " << rounds << " rounds to reach 100!" << endl;
	}

}