#include "ScoreManager.h"
#include <iostream>

using namespace std;

void ScoreManager::addPoints(int points)
{
	currentScore += points;
}
void ScoreManager::resetScore()
{
	currentScore = 0;
}
void ScoreManager::updateHighScore()
{
	highScore = currentScore;
}
void ScoreManager::displayScore()
{
	cout << "Score :" << currentScore << "HighScore :" << highScore;
}