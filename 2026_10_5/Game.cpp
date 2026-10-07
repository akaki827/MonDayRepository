#include "Game.h"
void Game::GameRoop()
{
	while (enemy.Enemy_vit > 0 or player.Player_vit > 0)
	{
		character.CharacterInit();

		player.PlayerInit(&enemy);

		enemy.EnemyInit(&player);

		player.PlayerInput(playerinput);

		enemy.EnemyInput();

	}
}