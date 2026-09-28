#include "player.h"
#include "Config.h"
#include <iostream>
void Player::PlayerInput(int playernum)
{
	while (true)
	{
		std::cout << "カードを引く場合は　１　を、\n引かない場合は　２　を押して下さい" << std::endl;

		std::cin >>  playernum;

		if (playernum != Config::PLAYERKEEP && playernum != Config::PLAYERSELECT)
		{
			std::cout << "時間の無駄だからさっさとしてくれる？" << std::endl;
		}
		else break;
	}
}
