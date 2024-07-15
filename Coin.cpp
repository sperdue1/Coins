#include "Coin.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Coin::Coin() : centValue(0) {

}
Coin::Coin(int value) : centValue(value) {

}
void Coin::flip() {
	if (rand() % 2 == 0)
		isHeads = false;
	else
		isHeads = true;

}
bool Coin::isItHeads() const {
	return isHeads;
}
string Coin::getSideUp() const {
	if (isHeads == true)
		return "Heads ";
	else
		return "Tails ";
}
int Coin::getCentValue() const {
	return centValue;
}