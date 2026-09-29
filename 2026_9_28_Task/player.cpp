#include "player.h"
#include "Config.h"
#include <iostream>
//入力チェック
void Player::PlayerInput(int&playernum)
{
	while (true)
	{
		std::cout << "カードを引く場合は　0　を、\n引かない場合は　1　を押して下さい" << std::endl;

		std::cin >> playernum;

		if (playernum != Config::PLAYERKEEP && playernum != Config::PLAYERSELECT)
		{
			std::cout << "時間の無駄だからさっさとしてくれる？" << std::endl;
		}

		else break;
	}
}
